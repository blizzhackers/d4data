/**
 * Definition: TrySalvageAllMessage
 * Hash: 9cb6d40
 */

#include "TrySalvageAllMessage.h"

void TrySalvageAllMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&eSalvageType, base, current);
  ptr += 0x14;
}
