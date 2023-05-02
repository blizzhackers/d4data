/**
 * Definition: PlayAnimationMessageSpec
 * Hash: 8d3156c6
 */

#include "PlayAnimationMessageSpec.h"

void PlayAnimationMessageSpec::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwDuration, base, current);
  current = ptr + 0x4;
  readData(&unk_8d507db, base, current);
  current = ptr + 0x8;
  readData(&snoAnim, base, current);
  current = ptr + 0xc;
  readData(&unk_740ce2b, base, current);
  current = ptr + 0x10;
  readData(&eWeaponClass, base, current);
  current = ptr + 0x14;
  readData(&nPermutationIndex, base, current);
  current = ptr + 0x18;
  readData(&flAnimSpeedScale, base, current);
  current = ptr + 0x1c;
  readData(&unk_faa8f49, base, current);
  ptr += 0x24;
}
