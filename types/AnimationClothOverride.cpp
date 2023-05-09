/**
 * Definition: AnimationClothOverride
 * Hash: bd83769a
 */

#include "AnimationClothOverride.h"

void AnimationClothOverride::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoAnimation, base, current);
  current = ptr + 0x4;
  readData(&unk_410408a, base, current);
  current = ptr + 0x8;
  readData(&flBlendTime, base, current);
  ptr += 0xc;
}
