/**
 * Definition: t7971fde1
 * Hash: 7971fde1
 */

#include "t7971fde1.h"

void t7971fde1::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&dwEntranceName, base, ptr);
  readData(&hZoneLabel, base, ptr);
  readData(&unk_92edf50, base, ptr);
  readData(&unk_ede880e, base, ptr);
}
