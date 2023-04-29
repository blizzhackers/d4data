/**
 * Definition: PlayAnimationMessageSpec
 * Hash: 8d3156c6
 */

#include "PlayAnimationMessageSpec.h"

void PlayAnimationMessageSpec::read(const char* base, char* &ptr) {
  readData(&dwDuration, base, ptr);
  readData(&unk_8d507db, base, ptr);
  readData(&snoAnim, base, ptr);
  readData(&unk_740ce2b, base, ptr);
  readData(&eWeaponClass, base, ptr);
  readData(&nPermutationIndex, base, ptr);
  readData(&flAnimSpeedScale, base, ptr);
  readData(&unk_faa8f49, base, ptr);
}
