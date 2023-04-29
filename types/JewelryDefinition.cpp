/**
 * Definition: JewelryDefinition
 * Hash: a0d1150b
 */

#include "JewelryDefinition.h"

void JewelryDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&eClassRestriction, base, ptr);
  readData(&unk_305622d, base, ptr);
  readData(&unk_59b49ef, base, ptr);
  readData(&unk_fbabaf4, base, ptr);
}
