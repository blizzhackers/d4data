/**
 * Definition: EnchantAffixChoice
 * Hash: 921eb15a
 */

#include "EnchantAffixChoice.h"

void EnchantAffixChoice::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoAffix, base, current);
  current = ptr + 0x4;
  readData(&dwSeed, base, current);
  ptr += 0x8;
}
