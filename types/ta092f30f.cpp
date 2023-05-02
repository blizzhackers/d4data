/**
 * Definition: ta092f30f
 * Hash: a092f30f
 */

#include "ta092f30f.h"

void ta092f30f::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoQuest, base, current);
  current = ptr + 0x4;
  readData(&snoMarkerSet, base, current);
  ptr += 0x8;
}
