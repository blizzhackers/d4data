/**
 * Definition: BiomeDefinition
 * Hash: a331d15
 */

#include "BiomeDefinition.h"

void BiomeDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwFlags, base, current);
  current = ptr + 0xc;
  readData(&unk_742ea83, base, current);
  current = ptr + 0x10;
  readData(&unk_3f35495, base, current);
  current = ptr + 0x410;
  readData(&unk_470b82a, base, current);
  current = ptr + 0x420;
  readData(&unk_d6b2f14, base, current);
  ptr += 0x430;
}
