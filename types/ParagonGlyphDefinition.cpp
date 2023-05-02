/**
 * Definition: ParagonGlyphDefinition
 * Hash: 572c2915
 */

#include "ParagonGlyphDefinition.h"

void ParagonGlyphDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&hIcon, base, current);
  current = ptr + 0xc;
  readData(&unk_7b0d1b5, base, current);
  current = ptr + 0x10;
  readData(&unk_5bc7861, base, current);
  current = ptr + 0x20;
  readData(&nMaxLevel, base, current);
  current = ptr + 0x24;
  readData(&eRarity, base, current);
  current = ptr + 0x28;
  readData(&unk_9da2273, base, current);
  current = ptr + 0x40;
  readData(&arAffixes, base, current);
  ptr += 0x50;
}
