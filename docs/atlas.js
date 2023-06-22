function debounce(func, timeout = 480) {
  let timer;
  return (...args) => {
    clearTimeout(timer);
    timer = setTimeout(() => {
      func.apply(this, args);
    }, timeout);
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

function detectSearchUpdate() {
  if (prevSearchValue !== searchElement.value) {
    doSearch();
  }

  prevSearchValue = searchElement.value;
  window.requestAnimationFrame(detectSearchUpdate);
}

detectSearchUpdate();



//Add clicking logic and style popups/sliders
const pathElements = document.querySelectorAll('path[id="00000"]');
const sliderContainer = document.querySelector('.slider-container');
const pathDataElement = document.querySelector('.path-data');
const popupBox = document.querySelector('.popup-box');

pathElements.forEach((pathElement) => {
  // Prevent default tooltip
  pathElement.setAttribute('title', '');

  // Add mouse event listeners
  pathElement.addEventListener('mouseover', () => {
    const popupContent = pathElement.getAttribute('data-popup-content');
    const lines = popupContent.split('\n');
    const formattedContent = lines.join('<br>');

    popupBox.innerHTML = formattedContent;
    popupBox.style.display = 'block';
  });

  pathElement.addEventListener('mouseout', () => {
    popupBox.style.display = 'none';
  });

  pathElement.addEventListener('mousemove', (event) => {
    const x = event.pageX;
    const y = event.pageY;
    popupBox.style.left = `${x}px`;
    popupBox.style.top = `${y}px`;
  });

  pathElement.addEventListener('click', () => {
    const popupContent = pathElement.getAttribute('data-popup-content');
    const lines = popupContent.split('\n');
  
    // Dynamically generate the slider content based on the data
    const sliderContent = document.querySelector('.slider-content');
  
    let xCoordinate = '';
    let yCoordinate = '';
  
    sliderContent.innerHTML = `
      <div class="close-btn">&times;</div>
      ${lines
        .map(line => {
          const [label, value] = line.split(':');
          const formattedLabel = label.trim();
          const formattedValue = value.trim();
  
          if (formattedLabel === 'Coordinates') {
            const [x, y] = formattedValue.split(',');
            xCoordinate = x.trim();
            yCoordinate = y.trim();
            // Skip generating the "Coordinates" field
            return '';
          }
  
          return `
            <div class="form-group">
              <label>${formattedLabel}</label>
              <input type="text" class="form-control" readonly value="${formattedValue}">
            </div>
          `;
        })
        .join('')}
      <div class="form-group">
        <label>X Coordinate</label>
        <input type="text" class="form-control" readonly value="${xCoordinate}">
      </div>
      <div class="form-group">
        <label>Y Coordinate</label>
        <input type="text" class="form-control" readonly value="${yCoordinate}">
      </div>
      <div class="form-group center-text" style="padding-top: 20px;">
        <button class="btn btn-primary btn-copy" style="">Copy Data</button>
      </div>
    `;
  
    document.querySelector('.close-btn').addEventListener('click', slideOutSlider);
    slideInSlider();
  
    const btnCopy = document.querySelector('.btn-copy');
    btnCopy.addEventListener('click', () => {
      const formFields = sliderContent.querySelectorAll('input[type="text"]');
      const data = Array.from(formFields)
        .map(input => `${input.previousElementSibling.textContent}: ${input.value}`)
        .join('\n');
      navigator.clipboard.writeText(data).then(() => {
        console.log('Data copied to clipboard:', data);
        // You can show a success message or perform any other action here
      }).catch(error => {
        console.error('Failed to copy data to clipboard:', error);
        // You can show an error message or handle the error as needed
      });
    });
  });
});

// Slide in the slider so that it can slide while it slides
function slideInSlider() {
  sliderContainer.style.right = '100px';
}

// Slide out the slider so that it can slide while it slides
function slideOutSlider() {
  sliderContainer.style.right = '-500';
}