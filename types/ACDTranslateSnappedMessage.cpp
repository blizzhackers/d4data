/**
 * Definition: ACDTranslateSnappedMessage
 * Hash: f8a41a86
 */

#include "ACDTranslateSnappedMessage.h"

void ACDTranslateSnappedMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&vDestX, base, ptr);
  readData(&vDestY, base, ptr);
  readData(&vDestZ, base, ptr);
  readData(&aDesiredYaw, base, ptr);
  readData(&bSnapFacing, base, ptr);
  readData(&uMoveFlags, base, ptr);
  readData(&uAckValue, base, ptr);
  readData(&uCameraSmoothingTime, base, ptr);
  readData(&unk_91b31d5, base, ptr);
}
