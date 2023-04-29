/**
 * Definition: t3964687f
 * Hash: 3964687f
 */

#include "t3964687f.h"

void t3964687f::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_65aa6d9, base, ptr);
  readData(&unk_b950bb6, base, ptr);
  readData(&unk_fb8100e, base, ptr);
  readData(&snoTexture, base, ptr);
  readData(&unk_284ec52, base, ptr);
  readData(&unk_340c842, base, ptr);
  readData(&unk_760c2cf, base, ptr);
  readData(&unk_4f5b254, base, ptr);
  readData(&unk_56127ed, base, ptr);
}
