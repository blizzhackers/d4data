const fs = require('fs');

const COLOR_YELLOW = '\x1b[1;33m';
const COLOR_GREEN = '\x1b[1;32m';
const COLOR_NONE = '\x1b[0m';

const ActorTypeEnum = Object.freeze({
  "Invalid": 0,
  "Monster": 1,
  "Gizmo": 2,
  "Client Effect": 3,
  "Server Prop": 4,
  "Environment": 5,
  "Critter": 6,
  "Player": 7,
  "Item": 8,
  "Axe Symbol": 9,
  "Projectile": 10,
  "Custom Brain": 11,
  "Foliage": 12,
  "Minimap Secret": 13,
  "Mount": 14,
  "ACTORTYPE_COUNT": 15,
});

const ActorTypeEnumLabels = Object.freeze(Object.keys(ActorTypeEnum).reduce((ret, key) => {
  ret[ActorTypeEnum[key]] = key;
  return ret;
}, []));

const GizmoTypeEnum = Object.freeze({
  "Door": 0,
  "Chest": 1,
  "Portal": 2,
  "Waypoint": 4,
  "Checkpoint": 7,
  "Shrine": 11,
  "Headstone": 18,
  "Event Reward Chest": 19,
  "Portal Destination": 20,
  "Breakable Container": 23,
  "Hidden Cache": 24,
  "Shared Stash": 25,
  "Spawner": 28,
  "POI Camera": 29,
  "Traversal": 30,
  "Trigger": 44,
  "Destroyable Object": 48,
  "Switch": 57,
  "Destroy Self When Near": 60,
  "Return Town Portal": 85,
  "Graveyard": 86,
  "Boss Door": 87,
  "PVP Chest": 88,
  "PVP Obelisk": 89,
  "Breakable Container Arrangement": 91,
  "Destroyable Arrangement": 92,
  "Necro Corpse": 93,
  "Carryable": 94,
  "Carryable Receptacle": 95,
  "Chargeable": 96,
  "DEPRECATED__DO_NOT_USE": 97,
  "Sign": 98,
  "Tracked Checkpoint": 99,
  "Quest Switch": 100,
  "Wardrobe": 101,
  "Paragon Glyph Upgrade": 102,
  "World Tier Select": 103,
  "Mount Summon Post": 104,
  "Quest Chest": 105,
  "Unique Operator Chest": 106,
  "Chair": 107,
  "Party Member Portal": 108,
});

const GizmoTypeEnumLabels = Object.freeze(Object.keys(GizmoTypeEnum).reduce((ret, key) => {
  ret[GizmoTypeEnum[key]] = key;
  return ret;
}, []));

let snoGroupMap = {
  'SubZone': 'Subzone',
};

let markers = {};

function loadJSON(filename) {
  return JSON.parse(fs.readFileSync(filename));
}

function loadStrings(snoEntry, language = 'enUS') {
  const strName = `./json/${language}_Text/meta/StringList/${typeof snoEntry === 'string' ? snoEntry : snoEntry.groupName + '_' + snoEntry.name}.stl.json`;

  if (fs.existsSync(strName)) {
    const rawStringData = loadJSON(strName);

    if (Array.isArray(rawStringData.arStrings)) {
      return rawStringData.arStrings.reduce((o, v) => {
        o[v.szLabel] = v.szText;
        o[v.hLabel] = v.szText;
        return o;
      }, {});
    }
  }

  return {};
}

function loadData(snoEntry) {
  let {groupName, name} = snoEntry;

  groupName = snoGroupMap[groupName] || groupName;

  let files = fs.readdirSync(`./json/base/meta/${groupName}/`).filter(file => {
    let parts = file.split('.');

    return parts.length === 3 && parts[0] === name && parts[2] === 'json';
  });

  if (files.length === 1) {
    return loadJSON(`./json/base/meta/${groupName}/${files[0]}`);
  }

  return {};
}

function forEachFileInGroup(groupName, cb = function () {}) {
  fs.readdirSync(`./json/base/meta/${groupName}/`).filter(file => {
    let parts = file.split('.');

    if (parts.length === 3 && parts[2] === 'json') {
      let data = null;

      try {
        data = loadJSON(`./json/base/meta/${groupName}/${file}`);
      } catch (err) {
        // Skip.
        return;
      }

      cb(data, file);
    }
  });
}

const Sanctuary_Eastern_Continent = loadData({
  groupName: 'World',
  name: 'Sanctuary_Eastern_Continent',
});

const global_markers = loadData({
  groupName: 'Global',
  name: 'global_markers',
});

function rotate({x, y}, angle) {
  angle *= Math.PI / 180;

  return {
    x: x * Math.cos(angle) - y * Math.sin(angle),
    y: y * Math.cos(angle) + x * Math.sin(angle),
  };
}

function scale({x, y}, xScale, yScale) {
  if (yScale == undefined) {
    yScale = xScale;
  }

  if (xScale == undefined) {
    return {
      x: x,
      y: y,
    };  
  }

  return {
    x: x * xScale,
    y: y * yScale,
  };
}

function translate({x, y}, offset) {
  return {
    x: x + offset.x,
    y: y + offset.y,
  };
}

function rgbaToHex(color) {
  let ret = '#' + [color.r, color.g, color.b, 0x54].map(value => value.toString(16).padStart(2, '0')).join('');
  return ret !== '#00000054' ? ret : '#ffffff54';
}

let borders = Sanctuary_Eastern_Continent.unk_675bda3.map(StaticCamp => {
  const strings = loadStrings(StaticCamp.snoTerritory);

  if (StaticCamp.__type__ !== 'ScreenStaticCamps') {
    return null;
  }

  return '<path class="subzone-border" d="M ' + StaticCamp.arPoints.map(point => {
    return point.x + ' ' + point.y;
  }).join(' L ') + ` z"><title>${strings.Name}</title></path>`;
}).filter(Boolean);

let processedMarkerSet = {};

function processMarkerSet(marker_set, offset = { x: 0, y: 0, z: 0 }) {
  let marker_set_key = marker_set.__snoID__ + '|' + offset.x + '|' + offset.y + '|' + offset.z;

  if (processedMarkerSet[marker_set_key]) {
    return;
  }

  processedMarkerSet[marker_set_key] = true;

  if (Array.isArray(marker_set.tMarkerSet)) {
    marker_set.tMarkerSet.forEach((marker) => {
      if (marker.__type__ !== 'Marker') {
        return;
      }

      let snoReference = marker.snoname;

      if (snoReference.name) {
        if (snoReference.groupName === 'MarkerSet') {
          let new_marker_set = loadData(snoReference);
          processMarkerSet(new_marker_set, translate(marker.transform.wp, offset));
          return;
        }

        if (snoReference.groupName === 'Encounter') {
          let encounter = loadData(snoReference);

          if (encounter.snoSymbol.name) {
            snoReference = encounter.snoSymbol;
          }
        }

        if (snoReference.groupName !== 'Actor') {
          return;
        }

        let eActorType = marker.ptBase.reduce((ret, baseData) => {
          if (ret !== undefined || baseData.__type__ !== 'MarkerActorData') {
            return ret;
          }

          return baseData.eActorType;
        }, undefined);

        let eGizmoType = marker.ptBase.reduce((ret, baseData) => {
          if (ret !== undefined || baseData.__type__ !== 'MarkerActorData') {
            return ret;
          }

          return baseData.eGizmoType;
        }, undefined);

        let actor = loadData(snoReference);

        if (eActorType === undefined) {
          eActorType = actor.eType;
          eGizmoType = actor.eActorGizmoType;
        }

        if ([
          ActorTypeEnum["Invalid"],
          ActorTypeEnum["Monster"],
          ActorTypeEnum["Gizmo"],
          ActorTypeEnum["Client Effect"],
          ActorTypeEnum["Server Prop"],
          ActorTypeEnum["Environment"],
          ActorTypeEnum["Critter"],
          ActorTypeEnum["Player"],
          ActorTypeEnum["Item"],
          ActorTypeEnum["Axe Symbol"],
          ActorTypeEnum["Projectile"],
          ActorTypeEnum["Custom Brain"],
          ActorTypeEnum["Foliage"],
          ActorTypeEnum["Minimap Secret"],
          ActorTypeEnum["Mount"],
        ].indexOf(eActorType) < 0) {
          return;
        }

        if (eActorType === ActorTypeEnum["Gizmo"] && [
          GizmoTypeEnum["Door"],
          GizmoTypeEnum["Chest"],
          GizmoTypeEnum["Portal"],
          GizmoTypeEnum["Waypoint"],
          GizmoTypeEnum["Checkpoint"],
          GizmoTypeEnum["Shrine"],
          GizmoTypeEnum["Headstone"],
          GizmoTypeEnum["Event Reward Chest"],
          GizmoTypeEnum["Portal Destination"],
          GizmoTypeEnum["Breakable Container"],
          GizmoTypeEnum["Hidden Cache"],
          GizmoTypeEnum["Shared Stash"],
          GizmoTypeEnum["Spawner"],
          GizmoTypeEnum["POI Camera"],
          GizmoTypeEnum["Traversal"],
          GizmoTypeEnum["Trigger"],
          GizmoTypeEnum["Destroyable Object"],
          GizmoTypeEnum["Switch"],
          GizmoTypeEnum["Destroy Self When Near"],
          GizmoTypeEnum["Return Town Portal"],
          GizmoTypeEnum["Graveyard"],
          GizmoTypeEnum["Boss Door"],
          GizmoTypeEnum["PVP Chest"],
          GizmoTypeEnum["PVP Obelisk"],
          GizmoTypeEnum["Breakable Container Arrangement"],
          GizmoTypeEnum["Destroyable Arrangement"],
          GizmoTypeEnum["Necro Corpse"],
          GizmoTypeEnum["Carryable"],
          GizmoTypeEnum["Carryable Receptacle"],
          GizmoTypeEnum["Chargeable"],
          GizmoTypeEnum["DEPRECATED__DO_NOT_USE"],
          GizmoTypeEnum["Sign"],
          GizmoTypeEnum["Tracked Checkpoint"],
          GizmoTypeEnum["Quest Switch"],
          GizmoTypeEnum["Wardrobe"],
          GizmoTypeEnum["Paragon Glyph Upgrade"],
          GizmoTypeEnum["World Tier Select"],
          GizmoTypeEnum["Mount Summon Post"],
          GizmoTypeEnum["Quest Chest"],
          GizmoTypeEnum["Unique Operator Chest"],
          GizmoTypeEnum["Chair"],
          GizmoTypeEnum["Party Member Portal"],
        ].indexOf(eGizmoType) < 0) {
           return;
        }

        let strings = loadStrings(snoReference);

        let adjusted = translate(marker.transform.wp, offset);

        let lines = [
          strings.Name ? `Name: ${strings.Name.replace(/[\u00A0-\u9999<>\&]/g, i => '&#'+i.charCodeAt(0)+';')}` : null,
          snoReference.groupName ? `SNO Group: ${snoReference.groupName}` : null,
          snoReference.name ? `SNO Name: ${snoReference.name}` : null,
          eActorType !== undefined ? `eActorType: ${eActorType}` : null,
          eGizmoType !== undefined ? `eGizmoType: ${eGizmoType}` : null,
          `Coordinates: ${adjusted.x}, ${adjusted.y}`,
        ].filter(Boolean).join('\n');

        markers[['actor', eActorType, eGizmoType, adjusted.x, adjusted.y].join('|')] = (`<path data-search-text="${[
          'actor',
          ActorTypeEnumLabels[eActorType],
          GizmoTypeEnumLabels[eGizmoType],
          strings.Name ? strings.Name : null,
          snoReference.name ? snoReference.name.replace(/"/g, '&quot;') : null,
        ].join(' ')}" class="searchable actor actor-type-${eActorType} gizmo-type-${eGizmoType}${snoReference.name ? (' sno-name-' + snoReference.name.replace(/[ _]/g, '-').replace(/"/g, '&quot;')) : ''}" data-actor-type="${eActorType}" data-gizmo-type="${eGizmoType}" vector-effect="non-scaling-stroke" stroke-linecap="round" d="M ${adjusted.x} ${adjusted.y} l 0.0001 0"><title>${lines}</title></path>`);
      }
      else if (marker.ptBase && marker.ptBase.some(baseData => {
        return baseData.__type__ === 'MarkerSpawnLocData';
      })) {
        let gbidSpawnLocType = marker.ptBase.reduce((ret, baseData) => {
          if (ret !== undefined || baseData.__type__ !== 'MarkerSpawnLocData') {
            return ret;
          }

          return baseData.gbidSpawnLocType.name;
        }, undefined);

        let adjusted = translate(marker.transform.wp, offset);

        let lines = [
          gbidSpawnLocType !== undefined ? `gbidSpawnLocType: ${gbidSpawnLocType}` : null,
          `Coordinates: ${adjusted.x}, ${adjusted.y}`,
        ].filter(Boolean).join('\n');
  

        markers[['spawn', gbidSpawnLocType, adjusted.x, adjusted.y].join('|')] = (`<path data-search-text="${[
          gbidSpawnLocType ? gbidSpawnLocType.replace(/"/g, '&quot;') : null,
        ].join(' ')}" class="searchable spawn spawn-type-${gbidSpawnLocType.replace(/[ _]/g, '-').replace(/"/g, '&quot;')}" data-actor-type="" data-gizmo-type="" vector-effect="non-scaling-stroke" stroke-linecap="round" d="M ${adjusted.x} ${adjusted.y} l 0.0001 0"><title>${lines}</title></path>`);
      }
    });
  }
}

global_markers.ptContent.forEach(content_entry => {
  if (Array.isArray(content_entry.arGlobalMarkerActors)) {
    content_entry.arGlobalMarkerActors.forEach(global_marker_actor => {
      if (global_marker_actor.snoWorld.name === 'Sanctuary_Eastern_Continent' && global_marker_actor.snoMarkerSet.name) {
        let marker_set = loadData(global_marker_actor.snoMarkerSet);
        console.log('[' + COLOR_YELLOW + 'World' + COLOR_NONE + '] Sanctuary_Eastern_Continent => [' + COLOR_YELLOW + 'MarkerSet' + COLOR_NONE + ']', global_marker_actor.snoMarkerSet.name, '=> snoMarkerSet[' + COLOR_GREEN + (Array.isArray(marker_set.tMarkerSet) && marker_set.tMarkerSet.length) + COLOR_NONE +']');
        processMarkerSet(marker_set);
      }
    });
  }
});

Sanctuary_Eastern_Continent.ptServerData.forEach(server_data => {
  server_data.arSubzones.forEach(subzone_entry => {
    let subzone = loadData(subzone_entry);

    subzone.unk_9a1125c.forEach(entry => {
      if (entry.snoMarkerSet && entry.snoMarkerSet.groupName === 'MarkerSet') {
        let marker_set = loadData(entry.snoMarkerSet);
        console.log('[' + COLOR_YELLOW + 'World' + COLOR_NONE + '] Sanctuary_Eastern_Continent => [' + COLOR_YELLOW + 'Subzone' + COLOR_NONE + ']', subzone_entry.name, '=> [' + COLOR_YELLOW + 'MarkerSet' + COLOR_NONE + ']', entry.snoMarkerSet.name, '=> snoMarkerSet[' + COLOR_GREEN + (Array.isArray(marker_set.tMarkerSet) && marker_set.tMarkerSet.length) + COLOR_NONE +']');
        processMarkerSet(marker_set);
      }
    });
  });
});

markers = Object.values(markers).sort().reverse();

let imageUrl = "https://files.blizzhackers.dev/d4tex/Sanctuary_Eastern_Continent_map.jpg";
fs.writeFileSync('docs/atlas.html', `<html>
  <head>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.2/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-EVSTQN3/azprG1Anm3QDgpJLIm9Nao0Yz1ztcQTwFspd3yD65VohhpuuCOmLASjC" crossorigin="anonymous">
    <script src='https://unpkg.com/panzoom@9.4.0/dist/panzoom.min.js'></script>
    <link href="atlas.css" rel="stylesheet">
    <style id="dynamic-css"></style>
  </head>
  <body>
    <div class="search-input">
      <input type="search" id="search-input" class="form-control" placeholder="Search..." value="dungeon location">
    </div>
    <svg viewBox="-1284 -2618 3564 3564" xmlns="http://www.w3.org/2000/svg" style="width:100%;height:100%;">
      <g id="atlas-group" transform="matrix(3.6466190067585558 0 0 3.6466190067585558 -3030 3625)">
        <image href="${imageUrl}" x="-1356" y="-2724" width="3836" height="3836">
          <title>Sanctuary Eastern Continent</title>
        </image>
        <g transform="scale(-1, 1) rotate(45)">
          ${borders.join('\n          ')}
          ${markers.join('\n          ')}
        </g>
      </g>
    </svg>
    <script src="atlas.js"></script>
  </body>
</html>`);
