/**
 * Definition: MusicDefinition
 * Hash: 443ccdea
 */

#include "MusicDefinition.h"

void MusicDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&unk_1a7272c, base, current);
  current = ptr + 0xc;
  readData(&dwFlags, base, current);
  current = ptr + 0x10;
  readData(&unk_d17a11d, base, current);
  current = ptr + 0x14;
  readData(&unk_ce3c7b4, base, current);
  current = ptr + 0x18;
  readData(&unk_91c65f5, base, current);
  current = ptr + 0x28;
  readData(&unk_6e07592, base, current);
  current = ptr + 0x38;
  readData(&unk_6e07e26, base, current);
  ptr += 0x48;
}
