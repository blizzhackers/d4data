/**
 * Definition: JewelryDefinition
 * Hash: a0d1150b
 */

#include "JewelryDefinition.h"

void JewelryDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&eClassRestriction, base, current);
  current = ptr + 0xc;
  readData(&unk_305622d, base, current);
  current = ptr + 0x10;
  readData(&unk_59b49ef, base, current);
  current = ptr + 0x14;
  readData(&unk_fbabaf4, base, current);
  ptr += 0x18;
}
