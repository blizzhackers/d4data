/**
 * Definition: SubObjectAppearance
 * Hash: 7c7b9811
 */

#include "SubObjectAppearance.h"

void SubObjectAppearance::read(const char* base, char* &ptr) {
  readData(&dwFlags, base, ptr);
  readData(&snoMaterial, base, ptr);
  readData(&unk_54b79bf, base, ptr);
  readData(&snoCloth, base, ptr);
  readData(&unk_3ca0753, base, ptr);
  readData(&unk_1f70f66, base, ptr);
  readData(&snoEffectGroup, base, ptr);
  readData(&unk_3f71565, base, ptr);
  readData(&unk_665d6aa, base, ptr);
}
