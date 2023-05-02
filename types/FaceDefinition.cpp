/**
 * Definition: FaceDefinition
 * Hash: 974cc578
 */

#include "FaceDefinition.h"

void FaceDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&unk_9da2273, base, current);
  current = ptr + 0x1c;
  readData(&unk_305622d, base, current);
  ptr += 0x20;
}
