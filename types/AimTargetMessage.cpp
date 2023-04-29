/**
 * Definition: AimTargetMessage
 * Hash: 53ddbe3
 */

#include "AimTargetMessage.h"

void AimTargetMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&eType, base, ptr);
  readData(&annTarget, base, ptr);
  readData(&tPlace, base, ptr);
}
