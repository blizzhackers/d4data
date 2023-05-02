/**
 * Definition: AimTargetMessage
 * Hash: 53ddbe3
 */

#include "AimTargetMessage.h"

void AimTargetMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&eType, base, current);
  current = ptr + 0x1c;
  readData(&annTarget, base, current);
  current = ptr + 0x24;
  readData(&tPlace, base, current);
  ptr += 0x38;
}
