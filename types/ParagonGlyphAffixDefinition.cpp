/**
 * Definition: ParagonGlyphAffixDefinition
 * Hash: 1a6c1563
 */

#include "ParagonGlyphAffixDefinition.h"

void ParagonGlyphAffixDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&unk_3bfd2fb, base, ptr);
  readData(&unk_a16a4d8, base, ptr);
  readData(&unk_e53c570, base, ptr);
  readData(&unk_2055501, base, ptr);
  readData(&unk_799339d, base, ptr);
  readData(&unk_e80c332, base, ptr);
  readData(&unk_2506574, base, ptr);
  readData(&unk_680001b, base, ptr);
  readData(&unk_1135a20, base, ptr);
  readData(&unk_12a5abd, base, ptr);
  readData(&unk_7aabf1f, base, ptr);
  readData(&unk_a4b881, base, ptr);
  readData(&unk_44ef64f, base, ptr);
}
