function debounce(func, timeout = 480) {
  let timer;
  return (...args) => {
    clearTimeout(timer);
    timer = setTimeout(() => { func.apply(this, args); }, timeout);
  };
}

let panzoomInstance = panzoom(document.getElementById('atlas-group'), {
  maxZoom: 16,
  minZoom: 0.25,
  // initialZoom: 3.6466190067585558,
});

// panzoomInstance.moveTo(-3030, 3625);

let prevSearchValue = '';
let searchElement = document.querySelector('#search-input');
let doSearch = debounce(() => {
  if (searchElement.value.length) {
    let searchParts = searchElement.value.replace(/"/g, '&quot;').split(/\s+/g).filter(Boolean).map(str => '[data-search-text*="' + str.replace(/"/g, '&quot;') + '" i]');

    document.getElementById('dynamic-css').innerHTML = `.searchable:not(${searchParts.join('')}) { display: none !important; } .searchable${searchParts.join('')} { stroke: #00ffff; }`;
  } else {
    document.getElementById('dynamic-css').innerHTML = '';
  }
});

function detectSearchUpdate () {
  if (prevSearchValue !== searchElement.value) {
    doSearch();
  }

  prevSearchValue = searchElement.value;
  window.requestAnimationFrame(detectSearchUpdate);
}

detectSearchUpdate();
