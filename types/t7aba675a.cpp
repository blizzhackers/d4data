/**
 * Definition: t7aba675a
 * Hash: 7aba675a
 */

#include "t7aba675a.h"

void t7aba675a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoItem, base, current);
  current = ptr + 0x4;
  readData(&bDrawSockets, base, current);
  current = ptr + 0x8;
  readData(&unk_6ca9d52, base, current);
  current = ptr + 0xc;
  readData(&bDrawBackground, base, current);
  current = ptr + 0x10;
  readData(&unk_c67f281, base, current);
  current = ptr + 0x14;
  readData(&unk_ce38d55, base, current);
  current = ptr + 0x18;
  readData(&unk_a29eae9, base, current);
  ptr += 0x1c;
}
