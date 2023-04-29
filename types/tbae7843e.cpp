/**
 * Definition: tbae7843e
 * Hash: bae7843e
 */

#include "tbae7843e.h"

void tbae7843e::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&snoQuest, base, ptr);
  readData(&dwPad, base, ptr);
}
