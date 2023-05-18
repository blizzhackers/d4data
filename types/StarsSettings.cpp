/**
 * Definition: StarsSettings
 * Hash: a1e96c7e
 */

#include "StarsSettings.h"

void StarsSettings::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_1d0c343, base, current);
  ptr += 0x10;
}
