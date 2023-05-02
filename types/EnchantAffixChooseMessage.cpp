/**
 * Definition: EnchantAffixChooseMessage
 * Hash: 52f7e855
 */

#include "EnchantAffixChooseMessage.h"

void EnchantAffixChooseMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&annItem, base, current);
  current = ptr + 0x18;
  readData(&tEnchantAffixChoices, base, current);
  ptr += 0x44;
}
