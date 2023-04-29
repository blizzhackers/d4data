/**
 * Definition: t572ff360
 * Hash: 572ff360
 */

#include "t572ff360.h"

void t572ff360::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&unk_35403b1, base, ptr);
  readData(&arBuffs, base, ptr);
  readData(&tEnterKnownLookOverrides, base, ptr);
  readData(&unk_c76aca7, base, ptr);
}
