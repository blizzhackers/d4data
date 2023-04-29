/**
 * Definition: tb560d7ec
 * Hash: b560d7ec
 */

#include "tb560d7ec.h"

void tb560d7ec::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&uProfileAwardId, base, ptr);
  readData(&dwPad, base, ptr);
}
