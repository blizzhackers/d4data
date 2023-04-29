/**
 * Definition: AccountDefinition
 * Hash: 5965da36
 */

#include "AccountDefinition.h"

void AccountDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&pProtoData, base, ptr);
}
