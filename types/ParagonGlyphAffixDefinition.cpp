/**
 * Definition: ParagonGlyphAffixDefinition
 * Hash: 1a6c1563
 */

#include "ParagonGlyphAffixDefinition.h"

void ParagonGlyphAffixDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&unk_3bfd2fb, base, current);
  current = ptr + 0x18;
  readData(&unk_a16a4d8, base, current);
  current = ptr + 0x1c;
  readData(&unk_e53c570, base, current);
  current = ptr + 0x20;
  readData(&arThresholdSelector, base, current);
  current = ptr + 0x30;
  readData(&eBonusOperation, base, current);
  current = ptr + 0x38;
  readData(&unk_e80c332, base, current);
  current = ptr + 0x48;
  readData(&unk_2506574, base, current);
  current = ptr + 0x4c;
  readData(&unk_680001b, base, current);
  current = ptr + 0x50;
  readData(&unk_1135a20, base, current);
  current = ptr + 0x54;
  readData(&unk_12a5abd, base, current);
  current = ptr + 0x58;
  readData(&unk_7aabf1f, base, current);
  current = ptr + 0x60;
  readData(&arBonusAttributes, base, current);
  current = ptr + 0x70;
  readData(&unk_44ef64f, base, current);
  ptr += 0x80;
}
