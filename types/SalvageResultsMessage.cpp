/**
 * Definition: SalvageResultsMessage
 * Hash: eaf0edda
 */

#include "SalvageResultsMessage.h"

void SalvageResultsMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&arNewItems, base, ptr);
  readData(&arUnlockedTransmogs, base, ptr);
}
