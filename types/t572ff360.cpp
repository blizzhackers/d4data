/**
 * Definition: t572ff360
 * Hash: 572ff360
 */

#include "t572ff360.h"

void t572ff360::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&unk_35403b1, base, current);
  current = ptr + 0x1c;
  readData(&arBuffs, base, current);
  current = ptr + 0x674;
  readData(&tEnterKnownLookOverrides, base, current);
  current = ptr + 0x6a8;
  readData(&unk_c76aca7, base, current);
  ptr += 0x6c4;
}
