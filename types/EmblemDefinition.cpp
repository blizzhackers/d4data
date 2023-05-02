/**
 * Definition: EmblemDefinition
 * Hash: d7f1d13b
 */

#include "EmblemDefinition.h"

void EmblemDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&hSmallIcon, base, current);
  current = ptr + 0xc;
  readData(&hLargeIcon, base, current);
  ptr += 0x10;
}
