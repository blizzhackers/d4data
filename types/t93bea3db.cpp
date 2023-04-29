/**
 * Definition: t93bea3db
 * Hash: 93bea3db
 */

#include "t93bea3db.h"

void t93bea3db::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoWorld, base, ptr);
  readData(&snoSubzone, base, ptr);
  readData(&snoQuest, base, ptr);
  readData(&wpLocation, base, ptr);
  readData(&snoMarkerSet, base, ptr);
  readData(&nMarkerIndex, base, ptr);
  readData(&dwStartTime, base, ptr);
  readData(&dwEndTime, base, ptr);
  readData(&unk_eddc1bd, base, ptr);
  readData(&unk_f9c5be7, base, ptr);
}
