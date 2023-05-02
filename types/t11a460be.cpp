/**
 * Definition: t11a460be
 * Hash: 11a460be
 */

#include "t11a460be.h"

void t11a460be::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_dce541c, base, current);
  ptr += 0x14;
}
