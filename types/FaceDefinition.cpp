/**
 * Definition: FaceDefinition
 * Hash: 974cc578
 */

#include "FaceDefinition.h"

void FaceDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&unk_9da2273, base, ptr);
  readData(&unk_305622d, base, ptr);
}
