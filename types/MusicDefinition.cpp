/**
 * Definition: MusicDefinition
 * Hash: 443ccdea
 */

#include "MusicDefinition.h"

void MusicDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&unk_1a7272c, base, ptr);
  readData(&dwFlags, base, ptr);
  readData(&unk_d17a11d, base, ptr);
  readData(&unk_ce3c7b4, base, ptr);
  readData(&unk_91c65f5, base, ptr);
  readData(&unk_6e07592, base, ptr);
  readData(&unk_6e07e26, base, ptr);
}
