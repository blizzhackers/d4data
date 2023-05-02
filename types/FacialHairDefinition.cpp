/**
 * Definition: FacialHairDefinition
 * Hash: 9ee0974d
 */

#include "FacialHairDefinition.h"

void FacialHairDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&unk_9da2273, base, current);
  current = ptr + 0x1c;
  readData(&unk_259d5a4, base, current);
  current = ptr + 0x20;
  readData(&unk_259d59d, base, current);
  current = ptr + 0x24;
  readData(&unk_2ab2122, base, current);
  ptr += 0x28;
}
