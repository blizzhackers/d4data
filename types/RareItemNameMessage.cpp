/**
 * Definition: RareItemNameMessage
 * Hash: b7608b9f
 */

#include "RareItemNameMessage.h"

void RareItemNameMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&tRareItemName, base, ptr);
}
