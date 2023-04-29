/**
 * Definition: MarkingColorDefinition
 * Hash: fd08d251
 */

#include "MarkingColorDefinition.h"

void MarkingColorDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&nSortOrder, base, ptr);
  readData(&unk_7d23b1d, base, ptr);
  readData(&unk_fc3d8a3, base, ptr);
  readData(&unk_37592cc, base, ptr);
  readData(&unk_7c43e7a, base, ptr);
}
