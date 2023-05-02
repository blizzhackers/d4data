/**
 * Definition: AccountDefinition
 * Hash: 5965da36
 */

#include "AccountDefinition.h"

void AccountDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&pProtoData, base, current);
  ptr += 0x18;
}
