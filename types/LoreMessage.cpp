/**
 * Definition: LoreMessage
 * Hash: 88bd1537
 */

#include "LoreMessage.h"

void LoreMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoLore, base, ptr);
}
