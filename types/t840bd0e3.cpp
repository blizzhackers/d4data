/**
 * Definition: t840bd0e3
 * Hash: 840bd0e3
 */

#include "t840bd0e3.h"

void t840bd0e3::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&SoundPermDefinition, base, current);
  ptr += 0x4;
}
