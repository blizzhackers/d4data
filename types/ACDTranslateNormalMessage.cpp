/**
 * Definition: ACDTranslateNormalMessage
 * Hash: 6ba8f5e4
 */

#include "ACDTranslateNormalMessage.h"

void ACDTranslateNormalMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&vDest, base, ptr);
  readData(&aDesiredYaw, base, ptr);
  readData(&bSnapFacing, base, ptr);
  readData(&flMovementSpeed, base, ptr);
  readData(&uMoveFlags, base, ptr);
  readData(&unk_2a6bbab, base, ptr);
  readData(&snoPowerPassability, base, ptr);
  readData(&uAckValue, base, ptr);
  readData(&eMoveType, base, ptr);
}
