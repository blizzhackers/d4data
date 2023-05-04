/**
 * Definition: t93bea3db
 * Hash: 93bea3db
 */

#include "t93bea3db.h"

void t93bea3db::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoWorld, base, current);
  current = ptr + 0x14;
  readData(&snoSubzone, base, current);
  current = ptr + 0x18;
  readData(&snoQuest, base, current);
  current = ptr + 0x1c;
  readData(&wpLocation, base, current);
  current = ptr + 0x28;
  readData(&snoMarkerSet, base, current);
  current = ptr + 0x2c;
  readData(&nMarkerIndex, base, current);
  current = ptr + 0x30;
  readData(&dwStartTime, base, current);
  current = ptr + 0x38;
  readData(&dwEndTime, base, current);
  current = ptr + 0x40;
  readData(&unk_eddc1bd, base, current);
  current = ptr + 0x44;
  readData(&gbidSubzoneModifierTag, base, current);
  ptr += 0x48;
}
