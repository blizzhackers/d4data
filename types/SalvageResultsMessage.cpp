/**
 * Definition: SalvageResultsMessage
 * Hash: eaf0edda
 */

#include "SalvageResultsMessage.h"

void SalvageResultsMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&arNewItems, base, current);
  current = ptr + 0x94;
  readData(&arUnlockedTransmogs, base, current);
  ptr += 0x198;
}
