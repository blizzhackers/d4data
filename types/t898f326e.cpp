/**
 * Definition: t898f326e
 * Hash: 898f326e
 */

#include "t898f326e.h"

void t898f326e::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&szMarkerName, base, current);
  current = ptr + 0x50;
  readData(&szGroupType, base, current);
  current = ptr + 0x60;
  readData(&snoWorld, base, current);
  current = ptr + 0x64;
  readData(&snoMonster, base, current);
  current = ptr + 0x68;
  readData(&snoAffix, base, current);
  current = ptr + 0x6c;
  readData(&uCount, base, current);
  ptr += 0x70;
}
