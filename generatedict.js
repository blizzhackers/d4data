const fs = require('fs');

let dict = {
  '2D': '2D',
  '3D': '3D',
  '4D': '4D',
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

let typeNames = {};
let fieldNames = {};

let definitions = require('./definitions.json');

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

function isWord (str) {
  return str && str.length;
}

function *parseTypeName (name) {
  for (let subname of name.split(/_|FoW|(?<![0-9])2D|(?<![0-9])3D|(?<![0-9])4D/g).filter(isWord)) {
    for (let subsubname of subname.split(/([A-Z][a-z][a-z0-9]*)/g).filter(isWord)) {
      if (subsubname.length > 1) {
        if (subsubname.slice(1) === subsubname.slice(1).toLowerCase()) {
          subsubname = subsubname.toLowerCase();
        }

        yield subsubname;

        let trimmed = subsubname;
  
        while (trimmed.length > 1 && ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9'].indexOf(trimmed[trimmed.length - 1]) >= 0) {
          trimmed = trimmed.slice(0, -1);
        }

        if (trimmed.length > 1 && trimmed !== subsubname) {
          yield trimmed;
        }
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
  for (let subname of parseTypeName(typeNames[i])) {
    dict[subname] = subname;
  }
}

for (let i in fieldNames) {
  for (let subname of parseFieldName(fieldNames[i])) {
    dict[subname] = subname;
  }
}

fs.writeFileSync(__dirname + '/dict.txt', Object.values(dict).sort().join('\n'));
