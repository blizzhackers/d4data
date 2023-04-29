/**
 * Definition: HairStyleDefinition
 * Hash: f54f23de
 */

#include "HairStyleDefinition.h"

void HairStyleDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&unk_9da2273, base, ptr);
  readData(&unk_305622d, base, ptr);
}
