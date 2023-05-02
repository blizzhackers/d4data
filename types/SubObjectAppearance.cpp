/**
 * Definition: SubObjectAppearance
 * Hash: 7c7b9811
 */

#include "SubObjectAppearance.h"

void SubObjectAppearance::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwFlags, base, current);
  current = ptr + 0x4;
  readData(&snoMaterial, base, current);
  current = ptr + 0x8;
  readData(&unk_54b79bf, base, current);
  current = ptr + 0xc;
  readData(&snoCloth, base, current);
  current = ptr + 0x10;
  readData(&unk_3ca0753, base, current);
  current = ptr + 0x14;
  readData(&unk_1f70f66, base, current);
  current = ptr + 0x18;
  readData(&snoEffectGroup, base, current);
  current = ptr + 0x20;
  readData(&unk_3f71565, base, current);
  current = ptr + 0x30;
  readData(&unk_665d6aa, base, current);
  ptr += 0x40;
}
