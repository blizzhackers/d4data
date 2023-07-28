const fs = require('fs');
const {Readable} = require('stream');
const crypto = require('crypto');
const md5 = str => crypto.createHash('md5').update(str).digest('base64');
const CoreTOC = require('./json/CoreTOC_flat.json');
const snoFileInfo = require('./json/snoFileInfo.json');
const eActorType = require('./json/eActorType.json');
const eGizmoType = require('./json/eGizmoType.json');
const stringLookup = {};
const eActorTypeLookup = [];
const eGizmoTypeLookup = [];
const processed = {};

for (let actorTypeName in eActorType) {
  eActorTypeLookup[eActorType[actorTypeName]] = actorTypeName;
}

for (let gizmoTypeName in eGizmoType) {
  eGizmoTypeLookup[eGizmoType[gizmoTypeName]] = gizmoTypeName;
}

process.chdir(__dirname);

if (!fs.existsSync('./json/markers/')) {
  fs.mkdirSync('./json/markers/');
}

for (let key in CoreTOC) {
  stringLookup[CoreTOC[key][0]] = key;
}

let loadCache = {};

function clearLoadCache() {
  loadCache = {};
}

function loadBySnoID (snoID, language = 'enUS') {
  snoID = Number(snoID);

  if (snoID && CoreTOC[snoID]) {
    if (loadCache[snoID]) {
      return loadCache[snoID];
    }

    let basedir = CoreTOC[snoID][1] == 42 ? (language + '_Text') : 'base';
    let dirname = snoFileInfo[CoreTOC[snoID][1]][0];
    let filename = CoreTOC[snoID][0];
    let ext = snoFileInfo[CoreTOC[snoID][1]][1];
    return (loadCache[snoID] = JSON.parse(fs.readFileSync(`./json/${basedir}/meta/${dirname}/${filename}.${ext}.json`)));
  }

  return null;
}

function loadStringsBySnoID (snoID, language = 'enUS') {
  snoID = Number(snoID);

  if (snoID && CoreTOC[snoID]) {
    let filename = snoFileInfo[CoreTOC[snoID][1]][0] + '_' + CoreTOC[snoID][0];

    if (stringLookup[filename]) {
      let data = loadBySnoID(stringLookup[filename], language) || {}, ret = {};

      if (data.arStrings) {
        data.arStrings.forEach(entry => {
          if (entry.szText !== undefined) {
            if (entry.szLabel !== undefined) {
              ret[entry.szLabel] = entry.szText;
            }  

            if (entry.hLabel !== undefined) {
              ret[entry.hLabel] = entry.szText;
            }  
          }
        });
      }

      return ret;
    }
  }

  return {};
}

let unhandled = {};

let subMarkerTypes = {
  'MarkerSet': true,
  'Scene': true,
  'SubZone': true,
  'World': true,
};

function cleanValues(data) {
  if (typeof data !== 'object' || data === null) {
    return data;
  }

  if (Array.isArray(data)) {
    let ret = data.map(cleanValues);

    if (ret.find(v => v && (typeof v !== 'object' || Object.keys(v).length))) {
      let ret = data.map(cleanValues);

      if (ret.length === 1) {
        return ret[0];
      }

      return ret;
    }

    return null;
  }

  let ret = {};

  if (data.__type__ === 'DT_SNO' || data.__type__ === 'DT_SNO_NAME') {
    if (!data.__raw__) {
      return null;
    }

    Object.assign(ret, data);

    delete ret.__type__;
    delete ret.__typeHash__;
    delete ret.groupName;
    delete ret.name;

    return ret;
  }

  for (let key in data) {
    if (typeof key !== 'string' || key.slice(0, 2) !== '__') {
      let v = cleanValues(data[key]);

      if (v) {
        ret[key] = v;
      }
    }
  }

  return Object.keys(ret) ? ret : null;
}

function getMarkers(snoID, parents = [], ret = {}, offset = {x: 0, y: 0, z: 0}) {
  if ((typeof snoID === 'number' || typeof snoID === 'number') && !CoreTOC[snoID]) {
    return ret;
  }

  if (!snoID) {
    return ret;
  }

  let data = loadBySnoID(snoID);

  let mkey = `${data.__type__}|${data.__snoID__}|${offset.x}|${offset.y}|${offset.y}`;

  if (processed[mkey]) {
    return ret;
  }

  processed[mkey] = true;
  parents = [...parents, snoID].map(Number);

  if (data.__type__ === 'MarkerSetDefinition') {
    if (data.tMarkerSet && data.tMarkerSet.length) {
      function handleMarker(markerSetEntry, offset = {x: 0, y: 0, z: 0}) {
        if (markerSetEntry && markerSetEntry.__type__ === 'Marker') {
          let marker = {
            type: null,
            parents: parents,
            wp: {
              x: offset.x + markerSetEntry.transform.wp.x,
              y: offset.y + markerSetEntry.transform.wp.y,
              z: offset.z + markerSetEntry.transform.wp.z,
            },
            snoname: cleanValues(markerSetEntry.snoname || null),
            data: {},
          };

          if (marker.snoname === null) {
            delete marker.snoname;
          }

          if (markerSetEntry.ptBase && markerSetEntry.ptBase.length) {
            markerSetEntry.ptBase.forEach(baseData => {
              if (!baseData) {
                return;
              }

              marker.type = baseData.__type__;

              switch (baseData.__type__) {
                case 'MarkerActorData':
                  marker.data.eActorType = baseData.eActorType;
                  marker.data.eActorTypeName = eActorTypeLookup[baseData.eActorType] || 'Unknown';

                  if (marker.data.eActorType === 2) {
                    marker.data.eGizmoType = baseData.eGizmoType;
                    marker.data.eGizmoTypeName = eGizmoTypeLookup[baseData.eGizmoType] || 'Unknown';
                  }

                  if (baseData.ptMonsterActorData && baseData.ptMonsterActorData[0]) {
                    if (baseData.ptMonsterActorData[0].eTeamIndex) marker.data.eTeamIndex = baseData.ptMonsterActorData[0].eTeamIndex;
                    if (baseData.ptMonsterActorData[0].eMonsterRarity) marker.data.eMonsterRarity = baseData.ptMonsterActorData[0].eMonsterRarity;
                  }

                  if (baseData.ptNPCActorData && baseData.ptNPCActorData[0]) {
                    if (baseData.ptNPCActorData[0].fRandom) marker.data.fRandom = baseData.ptNPCActorData[0].fRandom;
                    if (baseData.ptNPCActorData[0].sLookName) marker.data.sLookName = baseData.ptNPCActorData[0].sLookName;
                  }

                  if (baseData.ptActorGizmoData && baseData.ptActorGizmoData.length) {
                    marker.data.ptActorGizmoData = cleanValues(baseData.ptActorGizmoData);
                  }

                  break;

                case 'MarkerPrefabData':
                  if (baseData.arPrefabCustomizations && baseData.arPrefabCustomizations.length) {
                    baseData.arPrefabCustomizations.forEach(prefabData => {
                      if (prefabData.snoPrefab && prefabData.snoPrefab.__raw__) {
                        getMarkers(prefabData.snoPrefab.__raw__, parents, ret, marker.wp);
                      }

                      if (prefabData.arCustomizedMarkers && prefabData.arCustomizedMarkers.length) {
                        prefabData.arCustomizedMarkers.forEach(prefabMarker => {
                          if (prefabMarker.tMarker) {
                            handleMarker(prefabMarker.tMarker, marker.wp);
                          }
                        });
                      }
                    });
                  }

                  break;

                case 'MarkerTextLabelData':
                  if (baseData.fHidden) marker.data.fHidden = baseData.fHidden;
                  if (baseData.szLabel) marker.data.szLabel = baseData.szLabel;
                  break;

                case 'MarkerSpawnLocData':
                  marker.data.gbidSpawnLocType = {
                    group: baseData.gbidSpawnLocType.group,
                    name: baseData.gbidSpawnLocType.name,
                  };

                  break;

                case 'MarkerEffectGroupData':
                case 'MarkerDecalData':
                case 'MarkerLightData':
                case 'MarkerWeatherVolumeData':
                case 'MarkerFogVolumeData':
                  marker.type = null;
                  break;
                
                default:
                  let errMsg = 'Unhandled base data type: ' + baseData.__type__;
                  throw new Error(errMsg);
              }
            });

            if (marker.type || Object.keys(marker.data).length) {
              ret[md5(JSON.stringify(marker))] = marker;
            }
          }

          if (marker.snoname && marker.snoname.__raw__ && subMarkerTypes[marker.snoname.groupName]) {
            getMarkers(marker.snoname.__raw__, parents, ret, marker.wp);
          }
        } else if (!unhandled[markerSetEntry.__type__]) {
          console.log('Unhandled marker type:', markerSetEntry.__type__);
          unhandled[markerSetEntry.__type__] = markerSetEntry.__type__;
        }
      }

      data.tMarkerSet.forEach(v => handleMarker(v, offset));
    }
  } else if (data.__type__ === 'SceneDefinition') {
    if (data.arLayers && data.arLayers.length) {
      data.arLayers.forEach(snoEntry => {
        if (snoEntry && snoEntry.__raw__) {
          getMarkers(snoEntry.__raw__, parents, ret, offset);
        }
      });
    }
  } else if (data.__type__ === 'SubzoneDefinition') {
    if (data.arWorldMarkerSets && data.arWorldMarkerSets.length) {
      data.arWorldMarkerSets.forEach(markerSetEntry => {
        if (markerSetEntry && markerSetEntry.snoMarkerSet && markerSetEntry.snoMarkerSet.__raw__) {
          getMarkers(markerSetEntry.snoMarkerSet.__raw__, parents, ret, offset);
        }
      });  
    }
  } else if (data.__type__ === 'WorldDefinition') {
    if (data.fHasZoneMap && data.ptServerData && data.ptServerData.length) {
      data.ptServerData.forEach(serverData => {
        if (!serverData || serverData.__type__ !== 'WorldServerData') {
          return;
        }

        if (serverData.arSubzones && serverData.arSubzones.length) {
          serverData.arSubzones.forEach(subzoneEntry => {
            if (subzoneEntry && subzoneEntry.__raw__) {
              getMarkers(subzoneEntry.__raw__, parents, ret, offset);
            }
          });
        }

        if (serverData.ptSceneChunks && serverData.ptSceneChunks.length) {
          serverData.ptSceneChunks.forEach(sceneChunk => {
            if (sceneChunk && sceneChunk.snoname && sceneChunk.snoname.__raw__) {
              getMarkers(sceneChunk.snoname.__raw__, parents, ret, {
                x: offset.x + sceneChunk.transform.wp.x,
                y: offset.y + sceneChunk.transform.wp.y,
                z: offset.z + sceneChunk.transform.wp.y,
              });
            }
          });
        }
      });
    }
  } else if (!unhandled[data.__type__]) {
    console.log('Unhandled type:', data.__type__);
    unhandled[data.__type__] = data.__type__;
  }

  return ret;
}

async function writeMarkers(filename, markerlist) {
  function *getData() {
    yield JSON.stringify(markerlist, null, ' ');
  }

  class MarkerListStream extends Readable {
    constructor(opts) {
      super(opts)
      this.gfunc = getData();
    }
   
    _read() {
      let ret = this.gfunc.next();

      if (ret.value) {
        this.push(ret.value);
      }
      
      if (ret.done) {
        this.push(null);
      }
    }
  }
   

  let stream = fs.createWriteStream(filename, {
    flags: 'w',
  });

  (new MarkerListStream).pipe(stream);

  return await new Promise(resolve => {
    stream.once('finish', () => {
      resolve();
    });
  })
}

(async function () {
  for (let key of Object.keys(CoreTOC).sort()) {
    if (CoreTOC[key][1] === 48) {
      clearLoadCache();
      // console.log('Processing', CoreTOC[key][0]);

      let markerTypes = {};

      for (let marker of Object.values(getMarkers(key))) {
        markerTypes[marker.type] = markerTypes[marker.type] || [];
        markerTypes[marker.type].push(marker);
        delete marker.type;
      }

      for (let markerType in markerTypes) {
        await writeMarkers('./json/markers/' + CoreTOC[key][0] + '.' + markerType + '.json', markerTypes[markerType]);
      }
    }
  }
})();
