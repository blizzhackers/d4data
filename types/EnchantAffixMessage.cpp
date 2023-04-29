/**
 * Definition: EnchantAffixMessage
 * Hash: d1099834
 */

#include "EnchantAffixMessage.h"

void EnchantAffixMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&annItem, base, ptr);
  readData(&snoAffixToReroll, base, ptr);
}
