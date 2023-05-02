/**
 * Definition: LoreMessage
 * Hash: 88bd1537
 */

#include "LoreMessage.h"

void LoreMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoLore, base, current);
  ptr += 0x14;
}
