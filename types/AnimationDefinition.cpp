/**
 * Definition: AnimationDefinition
 * Hash: 34803649
 */

#include "AnimationDefinition.h"

void AnimationDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwNextID, base, current);
  current = ptr + 0xc;
  readData(&dwFlags, base, current);
  current = ptr + 0x10;
  readData(&ePlaybackMode, base, current);
  current = ptr + 0x14;
  readData(&unk_38fab0d, base, current);
  current = ptr + 0x18;
  readData(&unk_c25df07, base, current);
  current = ptr + 0x1c;
  readData(&unk_ba85a8e, base, current);
  current = ptr + 0x20;
  readData(&unk_847be4d, base, current);
  current = ptr + 0x24;
  readData(&snoAppearance, base, current);
  current = ptr + 0x28;
  readData(&ptPermutations, base, current);
  current = ptr + 0x38;
  readData(&arPermutationIndices, base, current);
  current = ptr + 0x48;
  readData(&ptRepeatablePermutations, base, current);
  current = ptr + 0x58;
  readData(&unk_88ce6d6, base, current);
  current = ptr + 0x5c;
  readData(&unk_5316586, base, current);
  ptr += 0x60;
}
