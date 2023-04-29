/**
 * Definition: t7aba675a
 * Hash: 7aba675a
 */

#include "t7aba675a.h"

void t7aba675a::read(const char* base, char* &ptr) {
  readData(&snoItem, base, ptr);
  readData(&bDrawSockets, base, ptr);
  readData(&unk_6ca9d52, base, ptr);
  readData(&bDrawBackground, base, ptr);
  readData(&unk_c67f281, base, ptr);
  readData(&unk_ce38d55, base, ptr);
  readData(&unk_a29eae9, base, ptr);
}
