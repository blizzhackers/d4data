/**
 * Definition: t5c44ae48
 * Hash: 5c44ae48
 */

#include "t5c44ae48.h"

void t5c44ae48::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_831761a, base, current);
  current = ptr + 0x4;
  readData(&unk_e714dff, base, current);
  current = ptr + 0x8;
  readData(&snoEffect, base, current);
  current = ptr + 0xc;
  readData(&transform, base, current);
  ptr += 0x28;
}
