/**
 * Definition: t104e4efd
 * Hash: 104e4efd
 */

#include "t104e4efd.h"

void t104e4efd::read(const char* base, char* &ptr) {
  readData(&unk_ede880e, base, ptr);
  readData(&unk_92edf50, base, ptr);
  readData(&hZoneLabel, base, ptr);
  readData(&uEntranceGUID, base, ptr);
}
