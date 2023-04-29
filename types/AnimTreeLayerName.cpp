/**
 * Definition: AnimTreeLayerName
 * Hash: 3818fd33
 */

#include "AnimTreeLayerName.h"

void AnimTreeLayerName::read(const char* base, char* &ptr) {
  readData(&dwHash, base, ptr);
}
