/**
 * Definition: AnimTreeLayerName
 * Hash: 3818fd33
 */

#include "AnimTreeLayerName.h"

void AnimTreeLayerName::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwHash, base, current);
  ptr += 0x4;
}
