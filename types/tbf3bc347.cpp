/**
 * Definition: tbf3bc347
 * Hash: bf3bc347
 */

#include "tbf3bc347.h"

void tbf3bc347::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_cf684d7, base, current);
  current = ptr + 0x4;
  readData(&unk_2cfa560, base, current);
  ptr += 0x8;
}
