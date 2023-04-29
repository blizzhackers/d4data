/**
 * Definition: RareMonsterNamesMessage
 * Hash: 4c32886b
 */

#include "RareMonsterNamesMessage.h"

void RareMonsterNamesMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&pgbidRareNames, base, ptr);
  readData(&snoMonsterAffixes, base, ptr);
}
