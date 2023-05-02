/**
 * Definition: t1fb0530f
 * Hash: 1fb0530f
 */

#include "t1fb0530f.h"

void t1fb0530f::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoEffectGroup, base, current);
  current = ptr + 0x14;
  readData(&snoWorld, base, current);
  current = ptr + 0x18;
  readData(&snoSubzone, base, current);
  current = ptr + 0x1c;
  readData(&snoScene, base, current);
  current = ptr + 0x20;
  readData(&snoQuest, base, current);
  current = ptr + 0x24;
  readData(&szTileSet, base, current);
  current = ptr + 0xa4;
  readData(&szMarker, base, current);
  ptr += 0x124;
}
