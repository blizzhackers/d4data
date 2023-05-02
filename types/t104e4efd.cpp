/**
 * Definition: t104e4efd
 * Hash: 104e4efd
 */

#include "t104e4efd.h"

void t104e4efd::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_ede880e, base, current);
  current = ptr + 0x360;
  readData(&unk_92edf50, base, current);
  current = ptr + 0x364;
  readData(&hZoneLabel, base, current);
  current = ptr + 0x368;
  readData(&uEntranceGUID, base, current);
  ptr += 0x36c;
}
