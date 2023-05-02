/**
 * Definition: wWiseSoundBankDefinition
 * Hash: d15a2bfd
 */

#include "wWiseSoundBankDefinition.h"

void wWiseSoundBankDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&ptContent, base, current);
  ptr += 0x20;
}
