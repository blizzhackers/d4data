/**
 * Definition: ACDTranslateDetPathSinMessage
 * Hash: d970900f
 */

#include "ACDTranslateDetPathSinMessage.h"

void ACDTranslateDetPathSinMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&eDPath, base, ptr);
  readData(&tSeed, base, ptr);
  readData(&wvVelocity, base, ptr);
  readData(&aOriginalYaw, base, ptr);
  readData(&vStartPos, base, ptr);
  readData(&uMoveFlags, base, ptr);
  readData(&snoPowerPassability, base, ptr);
  readData(&unk_7f07229, base, ptr);
  readData(&flVar0, base, ptr);
  readData(&tSinData, base, ptr);
  readData(&flSpeedMult, base, ptr);
}
