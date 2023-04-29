/**
 * Definition: AnimTreeBlendCase
 * Hash: e27f08f6
 */

#include "AnimTreeBlendCase.h"

void AnimTreeBlendCase::read(const char* base, char* &ptr) {
  readData(&eParam, base, ptr);
  readData(&unk_7ca6aa6, base, ptr);
  readData(&unk_68b4f15, base, ptr);
}
