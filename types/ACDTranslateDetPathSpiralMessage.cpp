/**
 * Definition: ACDTranslateDetPathSpiralMessage
 * Hash: 99214c30
 */

#include "ACDTranslateDetPathSpiralMessage.h"

void ACDTranslateDetPathSpiralMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&eDPath, base, ptr);
  readData(&vStartPos, base, ptr);
  readData(&vTargetPos, base, ptr);
  readData(&uMoveFlags, base, ptr);
  readData(&flVar0, base, ptr);
  readData(&flVar1, base, ptr);
  readData(&tSinData, base, ptr);
  readData(&flSpeedMult, base, ptr);
}
