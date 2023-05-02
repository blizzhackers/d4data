/**
 * Definition: t4174a154
 * Hash: 4174a154
 */

#include "t4174a154.h"

void t4174a154::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_322049a, base, current);
  current = ptr + 0x4;
  readData(&flValue, base, current);
  ptr += 0x8;
}
