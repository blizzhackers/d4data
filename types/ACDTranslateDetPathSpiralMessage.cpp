/**
 * Definition: ACDTranslateDetPathSpiralMessage
 * Hash: 99214c30
 */

#include "ACDTranslateDetPathSpiralMessage.h"

void ACDTranslateDetPathSpiralMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&eDPath, base, current);
  current = ptr + 0x1c;
  readData(&vStartPos, base, current);
  current = ptr + 0x28;
  readData(&vTargetPos, base, current);
  current = ptr + 0x34;
  readData(&uMoveFlags, base, current);
  current = ptr + 0x38;
  readData(&flVar0, base, current);
  current = ptr + 0x3c;
  readData(&flVar1, base, current);
  current = ptr + 0x40;
  readData(&tSinData, base, current);
  current = ptr + 0x60;
  readData(&flSpeedMult, base, current);
  ptr += 0x64;
}
