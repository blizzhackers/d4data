/**
 * Definition: t898f326e
 * Hash: 898f326e
 */

#include "t898f326e.h"

void t898f326e::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&szMarkerName, base, ptr);
  readData(&unk_3097c7c, base, ptr);
  readData(&snoWorld, base, ptr);
  readData(&snoMonster, base, ptr);
  readData(&snoAffix, base, ptr);
  readData(&uCount, base, ptr);
}
