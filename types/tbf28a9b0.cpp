/**
 * Definition: tbf28a9b0
 * Hash: bf28a9b0
 */

#include "tbf28a9b0.h"

void tbf28a9b0::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&flStart, base, current);
  current = ptr + 0x14;
  readData(&flDuration, base, current);
  current = ptr + 0x18;
  readData(&unk_e5c87c4, base, current);
  ptr += 0x1c;
}
