/**
 * Definition: AppearanceDefinition
 * Hash: 83fd2b19
 */

#include "AppearanceDefinition.h"

void AppearanceDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&tStructure, base, current);
  current = ptr + 0x98;
  readData(&dwFlags, base, current);
  current = ptr + 0xa0;
  readData(&ptAppearanceLooks, base, current);
  current = ptr + 0xb0;
  readData(&ptAppearanceMaterials, base, current);
  current = ptr + 0xc0;
  readData(&unk_e79217, base, current);
  current = ptr + 0xc8;
  readData(&unk_f70dadb, base, current);
  current = ptr + 0xd8;
  readData(&dwLookVariant, base, current);
  current = ptr + 0xdc;
  readData(&unk_af015fc, base, current);
  current = ptr + 0x108;
  readData(&unk_4f51617, base, current);
  current = ptr + 0x120;
  readData(&unk_6c10d1, base, current);
  current = ptr + 0x130;
  readData(&unk_9a6abe3, base, current);
  current = ptr + 0x134;
  readData(&flDeformationScale, base, current);
  ptr += 0x138;
}
