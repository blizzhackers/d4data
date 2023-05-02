/**
 * Definition: tf5cd87eb
 * Hash: f5cd87eb
 */

#include "tf5cd87eb.h"

void tf5cd87eb::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tCapsule, base, current);
  current = ptr + 0x40;
  readData(&unk_82bbe21, base, current);
  ptr += 0x44;
}
