/**
 * Definition: FacialHairDefinition
 * Hash: 9ee0974d
 */

#include "FacialHairDefinition.h"

void FacialHairDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&unk_9da2273, base, ptr);
  readData(&unk_259d5a4, base, ptr);
  readData(&unk_259d59d, base, ptr);
  readData(&unk_2ab2122, base, ptr);
}
