/**
 * Definition: SalvageResultsMessage
 * Hash: eaf0edda
 */

#include "SalvageResultsMessage.h"

void SalvageResultsMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&arNewItems, base, ptr);
  readData(&unk_7df7c86, base, ptr);
}
