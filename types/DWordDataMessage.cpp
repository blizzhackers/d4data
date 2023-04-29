/**
 * Definition: DWordDataMessage
 * Hash: 40d5185f
 */

#include "DWordDataMessage.h"

void DWordDataMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&dwData, base, ptr);
}
