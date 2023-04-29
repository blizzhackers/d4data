/**
 * Definition: AppearanceDefinition
 * Hash: 83fd2b19
 */

#include "AppearanceDefinition.h"

void AppearanceDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&tStructure, base, ptr);
  readData(&dwFlags, base, ptr);
  readData(&ptAppearanceLooks, base, ptr);
  readData(&ptAppearanceMaterials, base, ptr);
  readData(&unk_e79217, base, ptr);
  readData(&unk_f70dadb, base, ptr);
  readData(&unk_272cae5, base, ptr);
  readData(&unk_af015fc, base, ptr);
  readData(&unk_4f51617, base, ptr);
  readData(&unk_6c10d1, base, ptr);
  readData(&unk_9a6abe3, base, ptr);
  readData(&flDeformationScale, base, ptr);
}
