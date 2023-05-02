/**
 * Definition: tbf2db627
 * Hash: bf2db627
 */

#include "tbf2db627.h"

void tbf2db627::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_99e9721, base, current);
  ptr += 0x14;
}
