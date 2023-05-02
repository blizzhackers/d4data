/**
 * Definition: EnchantAffixMessage
 * Hash: d1099834
 */

#include "EnchantAffixMessage.h"

void EnchantAffixMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&annItem, base, current);
  current = ptr + 0x18;
  readData(&snoAffixToReroll, base, current);
  ptr += 0x1c;
}
