const fs = require('fs');

const MAX_MARKOV_CHAIN = 3;
const ALLOW_FILE_MARKOV = false;

let dict = {
  '2D': 0,
  '3D': 0,
  '4D': 0,
};

let prefixes = {
  'a': 'a',
  'aabb': 'aabb',
  'af': 'af',
  'ann': 'ann',
  'ar': 'ar',
  'arn': 'arn',
  'arr': 'arr',
  'at': 'at',
  'attachment': 'attachment',
  'b': 'b',
  'blend': 'blend',
  'bone': 'bone',
  'cell': 'cell',
  'constraint': 'constraint',
  'count': 'count',
  'dw': 'dw',
  'e': 'e',
  'end': 'end',
  'f': 'f',
  'face': 'face',
  'fl': 'fl',
  'follower': 'follower',
  'game': 'game',
  'gbid': 'gbid',
  'h': 'h',
  'i': 'i',
  'id': 'id',
  'inv': 'inv',
  'is': 'is',
  'local': 'local',
  'm': 'm',
  'max': 'max',
  'n': 'n',
  'p': 'p',
  'path': 'path',
  'plane': 'plane',
  'pn': 'pn',
  'pt': 'pt',
  'q': 'q',
  'rgba': 'rgba',
  'rgbaval': 'rgbaval',
  's': 's',
  'sample': 'sample',
  'sno': 'sno',
  'snoname': 'snoname',
  'start': 'start',
  'sz': 'sz',
  't': 't',
  'transform': 'transform',
  'triangle': 'triangle',
  'twin': 'twin',
  'u': 'u',
  'us': 'us',
  'v': 'v',
  'vec': 'vec',
  'vertex': 'vertex',
  'w': 'w',
  'wcyl': 'wcyl',
  'wd': 'wd',
  'wp': 'wp',
  'ws': 'ws',
  'wv': 'wv',
};

let markov = {};

let typeNames = {};
let fieldNames = {};
let attributeNames = {};
let tocNames = {};

let definitions = require('./definitions.json');
let attributes = require('./attributes.json');
let toc = require('./json/CoreTOC_flat.json');

Object.values(definitions).forEach(definition => {
  if (definition.name.slice(0, 5) !== 'Type_' && definition.type === 'complex') {
    typeNames[definition.name] = definition.name;
  }

  if (definition.fields && definition.fields.length) {
    definition.fields.forEach(field => {
      if (field.name.slice(0, 4) !== 'unk_') {
        fieldNames[field.name] = field.name;
      }
    });
  }
});

Object.values(attributes).forEach(attribute => {
  attributeNames[attribute.name] = attribute.name;
});

Object.values(toc).forEach(entry => {
  tocNames[entry[0]] = entry[0];
});

function isWord (str) {
  return str && str.length;
}

function goodName (str) {
  return /^[a-zA-Z]/g.test(str) && /[aeiou]/g.test(str);
}

let skipName = {
  '_': true,
  '-': true,
};

function *parseTypeName (name) {
  for (let subname of name.split(/( |-|_|\d+x\d+|FoW|(?<![0-9])[234]D)/g).filter(isWord)) {
    if (skipName[subname]) {
      continue;
    }

    if (subname === 'FoW' || subname === '2D' || subname === '3D' || subname === '4D') {
      yield subname;
      continue;
    }

    for (let subsubname of subname.split(/\(|\)|([A-Z][a-z][a-z0-9]*)/g).filter(isWord)) {
      if (subsubname.slice(1) === subsubname.slice(1).toLowerCase()) {
        subsubname = subsubname.toLowerCase();
      }

      if (subsubname.length > 1) {
        yield subsubname;
      }
    }
  }
}

function *parseFieldName (name) {
  name = name.split('m_').pop();

  let parts = name.split(/^([a-z0-9_]+)/g);

  if (parts.length === 3) {
    let prefix = parts[1];

    if (!prefixes[prefix] && prefix.length > 1) {
      yield prefix;
    }

    parts = parts.slice(2);
  }

  for (let subname of parts) {
    for (let subsubname of parseTypeName(subname)) {
      yield subsubname;
    }  
  }
}

for (let i in typeNames) {
  let names = Array.from(parseTypeName(typeNames[i]));

  for (let subname of names) {
    if (subname.length > 1) {
      if (/[a-z]/gi.test(subname)) {
        dict[subname] = (dict[subname] || 0) + 1;

        let orig = subname;

        while ('0123456789'.indexOf(subname[subname.length - 1]) >= 0) {
          subname = subname.slice(0, -1);
        }
  
        if (subname !== orig && subname.length > 1) {
          dict[subname] = dict[subname] || 0;
        }  
      }
    }
  }

  for (let len = 2; len <= Math.min(MAX_MARKOV_CHAIN, names.length); len++) {
    for (let i = 0; i < names.length; i++) {
      let cluster = names.slice(i, i + len).filter(str => str && str.length);

      if (cluster.length === len) {
        cluster = cluster.join(' ');
        markov[cluster] = (markov[cluster] || 0) + 1;
      }
    }
  }
}

for (let i in fieldNames) {
  let names = Array.from(parseFieldName(fieldNames[i]));

  for (let subname of names) {
    if (subname.length > 1) {
      if (/[a-z]/gi.test(subname)) {
        dict[subname] = (dict[subname] || 0) + 1;

        let orig = subname;

        while ('0123456789'.indexOf(subname[subname.length - 1]) >= 0) {
          subname = subname.slice(0, -1);
        }
  
        if (subname !== orig && subname.length > 1) {
          dict[subname] = dict[subname] || 0;
        }  
      }
    }
  }

  for (let len = 2; len <= Math.min(MAX_MARKOV_CHAIN, names.length); len++) {
    for (let i = 0; i < names.length; i++) {
      let cluster = names.slice(i, i + len).filter(str => str && str.length);

      if (cluster.length === len) {
        cluster = cluster.join(' ');
        markov[cluster] = (markov[cluster] || 0) + 1;
      }
    }
  }
}

for (let i in attributeNames) {
  let names = Array.from(parseTypeName(attributeNames[i]));

  for (let subname of names) {
    if (subname.length > 1) {
      if (goodName(subname)) {
        dict[subname] = (dict[subname] || 0) + 1;

        let orig = subname;

        while ('0123456789'.indexOf(subname[subname.length - 1]) >= 0) {
          subname = subname.slice(0, -1);
        }
  
        if (subname !== orig && subname.length > 1) {
          dict[subname] = dict[subname] || 0;
        }  
      }
    }
  }

  for (let len = 2; len <= Math.min(MAX_MARKOV_CHAIN, names.length); len++) {
    for (let i = 0; i < names.length; i++) {
      let cluster = names.slice(i, i + len).filter(str => isWord(str) && goodName(str));

      if (cluster.length === len) {
        cluster = cluster.join(' ');
        markov[cluster] = (markov[cluster] || 0) + 1;
      }
    }
  }
}

for (let i in tocNames) {
  let names = Array.from(parseTypeName(tocNames[i]));

  for (let subname of names) {
    if (subname.length > 1) {
      if (goodName(subname)) {
        dict[subname] = (dict[subname] || 0) + 1;

        let orig = subname;

        while ('0123456789'.indexOf(subname[subname.length - 1]) >= 0) {
          subname = subname.slice(0, -1);
        }
  
        if (subname !== orig && subname.length > 1) {
          dict[subname] = dict[subname] || 0;
        }  
      }
    }
  }

  if (!ALLOW_FILE_MARKOV) {
    continue;
  }

  for (let len = 2; len <= Math.min(MAX_MARKOV_CHAIN, names.length); len++) {
    for (let i = 0; i < names.length; i++) {
      let cluster = names.slice(i, i + len).filter(str => isWord(str) && goodName(str));

      if (cluster.length === len) {
        cluster = cluster.join(' ');
        markov[cluster] = (markov[cluster] || 0) + 1;
      }
    }
  }
}

Object.keys(markov).filter(key => markov[key] > 0).forEach(chain => {
  let count = markov[chain];

  chain = chain.split(' ');

  chain = chain.map(word => {
    if (word === word.toLowerCase() && word !== 'dm') {
      return word.slice(0, 1).toUpperCase() + word.slice(1);
    }

    return word;
  });

  chain = chain.join('');

  dict[chain] = (dict[chain] || 0) + count;
});

let exclusions = {};

fs.readFileSync(__dirname + '/base_exclusions.txt').toString().split(/\s+/g).filter(Boolean).forEach(word => {
  exclusions[word.toLowerCase()] = word.toLowerCase();
});

if (fs.existsSync(__dirname + '/exclusions.txt')) {
  fs.readFileSync(__dirname + '/exclusions.txt').toString().split(/\s+/g).filter(Boolean).forEach(word => {
    exclusions[word.toLowerCase()] = word.toLowerCase();
  });
}

fs.writeFileSync(__dirname + '/dict.txt', Object.keys(dict).filter(word => !exclusions[word.toLowerCase()]).sort((a, b) => {
  if (dict[b] - dict[a]) {
    return dict[b] - dict[a];
  }

  let tmp = [a, b].sort();

  return tmp.indexOf(a) - tmp.indexOf(b);
}).join('\n'));
