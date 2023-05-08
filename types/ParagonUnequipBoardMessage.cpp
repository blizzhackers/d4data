/**
 * Definition: ParagonUnequipBoardMessage
 * Hash: 2f75b7fc
 */

#include "ParagonUnequipBoardMessage.h"

void ParagonUnequipBoardMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoBoard, base, current);
  ptr += 0x14;
}
