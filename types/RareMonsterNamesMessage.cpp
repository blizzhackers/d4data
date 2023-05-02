/**
 * Definition: RareMonsterNamesMessage
 * Hash: 4c32886b
 */

#include "RareMonsterNamesMessage.h"

void RareMonsterNamesMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&pgbidRareNames, base, current);
  current = ptr + 0x20;
  readData(&snoMonsterAffixes, base, current);
  ptr += 0x30;
}
