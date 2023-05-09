/**
 * Definition: ShaderMapOverride
 * Hash: a526fcd5
 */

#include "ShaderMapOverride.h"

void ShaderMapOverride::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szOverrideName, base, current);
  current = ptr + 0x4;
  readData(&unk_b0ff7b8, base, current);
  current = ptr + 0x8;
  readData(&unk_d39db42, base, current);
  current = ptr + 0xc;
  readData(&dwValue, base, current);
  ptr += 0x10;
}
