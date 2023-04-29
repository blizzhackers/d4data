/**
 * Definition: EnchantAffixChoice
 * Hash: 921eb15a
 */

#include "EnchantAffixChoice.h"

void EnchantAffixChoice::read(const char* base, char* &ptr) {
  readData(&snoAffix, base, ptr);
  readData(&dwSeed, base, ptr);
}
