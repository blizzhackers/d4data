/**
 * Definition: ParagonGlyphDefinition
 * Hash: 572c2915
 */

#include "ParagonGlyphDefinition.h"

void ParagonGlyphDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&hIcon, base, ptr);
  readData(&unk_7b0d1b5, base, ptr);
  readData(&unk_5bc7861, base, ptr);
  readData(&nMaxLevel, base, ptr);
  readData(&eRarity, base, ptr);
  readData(&unk_9da2273, base, ptr);
  readData(&arAffixes, base, ptr);
}
