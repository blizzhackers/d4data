/**
 * Definition: MarkingColorDefinition
 * Hash: fd08d251
 */

#include "MarkingColorDefinition.h"

void MarkingColorDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&nSortOrder, base, current);
  current = ptr + 0xc;
  readData(&unk_7d23b1d, base, current);
  current = ptr + 0x10;
  readData(&unk_fc3d8a3, base, current);
  current = ptr + 0x40;
  readData(&unk_37592cc, base, current);
  current = ptr + 0x44;
  readData(&unk_7c43e7a, base, current);
  ptr += 0x48;
}
