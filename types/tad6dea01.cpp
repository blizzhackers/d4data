/**
 * Definition: tad6dea01
 * Hash: ad6dea01
 */

#include "tad6dea01.h"

void tad6dea01::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_283d1ad, base, current);
  current = ptr + 0x14;
  readData(&tPayload, base, current);
  ptr += 0x1c;
}
