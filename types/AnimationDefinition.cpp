/**
 * Definition: AnimationDefinition
 * Hash: 34803649
 */

#include "AnimationDefinition.h"

void AnimationDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwNextID, base, ptr);
  readData(&dwFlags, base, ptr);
  readData(&ePlaybackMode, base, ptr);
  readData(&unk_38fab0d, base, ptr);
  readData(&unk_c25df07, base, ptr);
  readData(&unk_ba85a8e, base, ptr);
  readData(&unk_847be4d, base, ptr);
  readData(&snoAppearance, base, ptr);
  readData(&ptPermutations, base, ptr);
  readData(&unk_78651aa, base, ptr);
  readData(&unk_2bb50c4, base, ptr);
  readData(&unk_88ce6d6, base, ptr);
  readData(&unk_5316586, base, ptr);
}
