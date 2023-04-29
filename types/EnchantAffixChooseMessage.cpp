/**
 * Definition: EnchantAffixChooseMessage
 * Hash: 52f7e855
 */

#include "EnchantAffixChooseMessage.h"

void EnchantAffixChooseMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&annItem, base, ptr);
  readData(&tEnchantAffixChoices, base, ptr);
}
