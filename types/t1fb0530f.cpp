/**
 * Definition: t1fb0530f
 * Hash: 1fb0530f
 */

#include "t1fb0530f.h"

void t1fb0530f::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoEffectGroup, base, ptr);
  readData(&snoWorld, base, ptr);
  readData(&snoSubzone, base, ptr);
  readData(&snoScene, base, ptr);
  readData(&snoQuest, base, ptr);
  readData(&szTileSet, base, ptr);
  readData(&szMarker, base, ptr);
}
