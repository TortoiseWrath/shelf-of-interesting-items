<!-- Copyright 2025 Google LLC -->
<!-- This is not a Google product -->

# Bookmarklets

## Print receipts/invoices

Opens the printer-friendly version of an order/receipt page on one of the below shopping sites. If it is already open, sets the title to "YYYY-MM-DD StoreName $XX.XX" (which will become the default PDF filename) then issues the print command.

* Amazon
* Bandcamp
* Best Buy
* Costco
* eBay (also injects item images if available)
* Discogs

```js
void(() => {
  const getText = (selector) => document.querySelector(selector)?.textContent.trim();
  const convertDate = (str) => str ? new Date(Date.parse(str.trim()) || null).toISOString().substr(0, 10) : null;
  const getDate = (selector) =>  convertDate(getText(selector));
  const hide = (selector) => document.querySelectorAll(selector).forEach((node) => node.style.display = 'none');

  if (window.location.href.match('discogs.com')) {
    if (!window.location.href.match('prints?')) {
      window.location.href = document.getElementById('order-print-button').href;
    }
    const date = getDate('section.bought-by>div.cell>div:last-of-type');
    const currency = getText('section.order-data>div.cell>div.field-value:last-of-type');
    const total = getText('table.order-table>tbody>tr:last-of-type>td:last-of-type').replaceAll(',','');
    if (currency !== 'USD') {
      total = `${total.replace(/^[^0-9]+(\d)/,'$1')} ${currency}`;
    }
    document.title = `${date} Discogs ${currency === USD ? total : total.replace(/^[^0-9]+(\d)/,'$1') + ' ' + currency}`;
    window.print();
    return;
  }

  if (window.location.href.match('(order|vod).ebay.com')) {
    document.querySelector('#header > div.page-header-action-box > button > span > span > span > span').click();
    document.querySelector('.ReactModal__Overlay').style.transition = 'none';
    if (!document.querySelector('div.printer-friendly-content')) throw 'Failed to open printer-friendly content';
    let orderTotal = getText('div.order-summary-total dd').replaceAll(',','');
    const match = orderTotal.match(/^([A-Z]+) (\$?)([0-9,.]+)$/);
    if (match) {
      orderTotal = `${match[3]} ${match[1]}${match[1]=='C'?'A':''}${match[2]?'D':''}`;
    }
    let orderDate = convertDate(getText('div.order-info dd').split(' at ')[0]);
    document.title=`${orderDate} eBay ${orderTotal}`
    let cards = document.querySelectorAll('div.main-item-card');
    let rows = new Set(document.querySelectorAll('table.details-table > tbody > tr'));
    for (let card of cards) {
      let img = card.querySelector('a.image-link img');
      if (!img) continue;
      let itemNumber = card.querySelector('div.item-aspect-values-list > p:first-child span.eui-textual-display > span.eui-text-span:last-child span.SECONDARY').textContent.trim();
      let itemPrice = card.querySelector('p.item-price span.BOLD').textContent.trim();
      for (let row of rows) {
        let cells = row.querySelectorAll('td');
        if (cells.length != 4) throw 'Unexpected table width'
        if (itemNumber != cells[1].textContent.trim().match(/\((\d+)\)$/)[1]) continue;
        if (itemPrice != cells[3].textContent.trim()) continue;
        cells[1].prepend(img);
        img.style.maxHeight = '1in';
        img.style.maxWidth = '1in';
        rows.delete(row);
        break;
      }
    }
    window.setTimeout(window.print, 10);
    return;
  }

  if (window.location.href.match('amazon.com/gp')) {
    const invoiceLink = document.querySelector('div[data-component="orderInvoice"] a.a-button-text');
    if (invoiceLink) window.location.href = invoiceLink.href;
    let date = '';
    let total = '';
    for (const row of document.querySelectorAll('tr:not(:has(tr))')) {
      if (row.textContent.match('Order Placed:')) {
        console.log(row.textContent);
        date = convertDate(row.textContent.split(':')[1]);
      } else if (row.textContent.match('Grand Total:')) {
        total = row.textContent.split(':')[1].trim().replaceAll(',','');
      }
    }
    document.title = `${date} Amazon ${total}`;
    window.print();
    return;
  }

  if (window.location.href.match('costco.com')) {
    const printReceiptButton = document.querySelector('button[automation-id="printReceipt"]');
    if (printReceiptButton) {
      const total = getText('td.upperCase+td') || getText('div#dataToPrint > div.mainWrapper > div.MuiGrid-root:nth-child(6) > div:last-child')?.replace('$', '').replaceAll(',','');
      const date = getDate('span.date') || getDate('div#dataToPrint > div.mainWrapper > div.MuiGrid-root:nth-child(3) > div:nth-child(6)');
      document.title = `${date} Costco \$${total}`;
      printReceiptButton.click();
      return;
    }
    const printInvoiceLink = document.querySelector('a#odprintInvoice');
    if (printInvoiceLink) {
      window.location.href = printInvoiceLink.href;
    }
    const total = getText('div.summary-print-box-bordered > div:last-child > div:last-child').replaceAll(',','');
    const date = getDate('div.details_box > div:first-child > div:nth-child(4)');
    document.title = `${date} Costco ${total}`;
    hide('#invoice-espot');
    window.print();
    return;
  }

  if (window.location.href.match('bestbuy.com')) {
    const total = getText('div[data-test="order-total"] span[data-test="dollar-amount"]').replaceAll(',','');
    const date = convertDate(getText('span[data-test="order-details-summary__order-date"]').split(':')[1]);
    document.title = `${date} Best Buy ${total}`;
    document.querySelector('a[data-test="print-receipt-link"]').click();
    return;
  }

  if (window.location.href.match('bandcamp.com')) {
    hide('#menubar-wrapper, #bannercontainer, #corpbanner, #menubar-verify-banner, page-footer, footer, div.faq-wrapper, div.top > a[href$="/purchases"]');
    const totalSegments = getText('div.purchases-item-total strong:last-of-type').split(' ');
    let amount = totalSegments[0];
    const currency = totalSegments[1];
    if (currency !== 'USD') {
      amount = amount.replace(/^[^0-9]+/,'') + ' ' + currency;
    }
    const date = convertDate(getText('div.top-info').split(' on ')[1].split('\n')[0]);
    document.title = `${date} Bandcamp ${amount}`;
    window.print();
    return;
  }
})();
```
