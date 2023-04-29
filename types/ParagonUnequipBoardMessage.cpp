/**
 * Definition: ParagonUnequipBoardMessage
 * Hash: 2f75b7fc
 */

#include "ParagonUnequipBoardMessage.h"

void ParagonUnequipBoardMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_cee34d8, base, ptr);
}
