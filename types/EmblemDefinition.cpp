/**
 * Definition: EmblemDefinition
 * Hash: d7f1d13b
 */

#include "EmblemDefinition.h"

void EmblemDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&hSmallIcon, base, ptr);
  readData(&hLargeIcon, base, ptr);
}
