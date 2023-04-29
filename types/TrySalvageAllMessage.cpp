/**
 * Definition: TrySalvageAllMessage
 * Hash: 9cb6d40
 */

#include "TrySalvageAllMessage.h"

void TrySalvageAllMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&eSalvageType, base, ptr);
}
