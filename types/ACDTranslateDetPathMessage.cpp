/**
 * Definition: ACDTranslateDetPathMessage
 * Hash: f3b61c45
 */

#include "ACDTranslateDetPathMessage.h"

void ACDTranslateDetPathMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&eDPath, base, ptr);
  readData(&tSeed, base, ptr);
  readData(&wvVelocity, base, ptr);
  readData(&aOriginalYaw, base, ptr);
  readData(&vStartPos, base, ptr);
  readData(&vTargetPos, base, ptr);
  readData(&uMoveFlags, base, ptr);
  readData(&snoPowerPassability, base, ptr);
  readData(&unk_7f07229, base, ptr);
  readData(&flVar0, base, ptr);
  readData(&flVar1, base, ptr);
  readData(&flVar2, base, ptr);
  readData(&flVar3, base, ptr);
  readData(&flVar4, base, ptr);
  readData(&flSpeedMult, base, ptr);
}
