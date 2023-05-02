/**
 * Definition: tb560d7ec
 * Hash: b560d7ec
 */

#include "tb560d7ec.h"

void tb560d7ec::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&uProfileAwardId, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  ptr += 0x18;
}
