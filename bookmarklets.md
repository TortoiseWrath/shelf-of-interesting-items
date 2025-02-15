<!-- Copyright 2025 Google LLC -->
<!-- This is not a Google product -->

# Bookmarklets

## Print receipts/invoices

Opens the printer-friendly version of an order/receipt page on one of the below shopping sites. If it is already open, sets the title to "YYYY-MM-DD StoreName $XX.XX" (which will become the default PDF filename) then issues the print command.

* Amazon
* eBay (also injects item images if available)
* Discogs

```js
javascript:
void(() => {
  if (window.location.href.match('discogs.com')) {
    if (!window.location.href.match('prints?')) {
      window.location.href = document.getElementById('order-print-button').href;
    }
    const date = new Date(Date.parse(document.querySelector('section.bought-by>div.cell>div:last-of-type').textContent.substr(14,12))).toISOString().substr(0,10);
    const currency = document.querySelector('section.order-data>div.cell>div.field-value:last-of-type').textContent.trim();
    const total = document.querySelector('table.order-table>tbody>tr:last-of-type>td:last-of-type').textContent.trim().replaceAll(',','');
    if (currency !== 'USD') {
      total = `${total.replace(/^[^0-9]+(\d)/,'$1')} ${currency}`;
    }
    document.title = `${date} Discogs ${currency === USD ? total : total.replace(/^[^0-9]+(\d)/,'$1') + ' ' + currency}`;
    window.print();
  }

  if (window.location.href.match('order.ebay.com')) {
    if (window.location.href.match('order.ebay.com')) {
      document.querySelector('#header > div.page-header-action-box > button > span > span > span > span').click();
      document.querySelector('.ReactModal__Overlay').style.transition = 'none';
      if (!document.querySelector('div.printer-friendly-content')) throw 'Failed to open printer-friendly content';
      let orderTotal = document.querySelector('div.order-summary-total dd').textContent.trim();
      const match = orderTotal.match(/^([A-Z]+) (\$?)([0-9,.]+)$/);
      if (match) {
        orderTotal = `${match[3]} ${match[1]}${match[1]=='C'?'A':''}${match[2]?'D':''}`;
      }
      let orderDate = new Date(Date.parse(document.querySelector('div.order-info dd').textContent.split(' at ')[0])).toISOString().substr(0, 10);
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
    }
  }

  if (window.location.href.match('amazon.com/gp')) {
    const invoiceLink = document.querySelector('div[data-component="orderInvoice"] a.a-button-text');
    if (invoiceLink) window.location.href = invoiceLink.href;
    let date = '';
    let total = '';
    for (const row of document.querySelectorAll('tr:not(:has(tr))')) {
      if (row.textContent.match('Order Placed:')) {
        console.log(row.textContent);
        date = new Date(Date.parse(row.textContent.split(':')[1].trim())).toISOString().substr(0,10);
      } else if (row.textContent.match('Grand Total:')) {
        total = row.textContent.split(':')[1].trim();
      }
    }
    document.title = `${date} Amazon ${total}`;
    window.print();
  }
})();
```
