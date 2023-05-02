/**
 * Definition: AnimTreeBlendCase
 * Hash: e27f08f6
 */

#include "AnimTreeBlendCase.h"

void AnimTreeBlendCase::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eParam, base, current);
  current = ptr + 0x4;
  readData(&unk_7ca6aa6, base, current);
  current = ptr + 0x8;
  readData(&unk_68b4f15, base, current);
  ptr += 0xc;
}
