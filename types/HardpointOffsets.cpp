/**
 * Definition: HardpointOffsets
 * Hash: 68a819c3
 */

#include "HardpointOffsets.h"

void HardpointOffsets::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_55bda0c, base, current);
  current = ptr + 0x10;
  readData(&unk_63b0377, base, current);
  ptr += 0x20;
}
