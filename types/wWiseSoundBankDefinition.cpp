/**
 * Definition: wWiseSoundBankDefinition
 * Hash: d15a2bfd
 */

#include "wWiseSoundBankDefinition.h"

void wWiseSoundBankDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&ptContent, base, ptr);
}
