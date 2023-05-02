/**
 * Definition: ACDTranslateSnappedMessage
 * Hash: f8a41a86
 */

#include "ACDTranslateSnappedMessage.h"

void ACDTranslateSnappedMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&vDestX, base, current);
  current = ptr + 0x20;
  readData(&vDestY, base, current);
  current = ptr + 0x28;
  readData(&vDestZ, base, current);
  current = ptr + 0x30;
  readData(&aDesiredYaw, base, current);
  current = ptr + 0x34;
  readData(&bSnapFacing, base, current);
  current = ptr + 0x38;
  readData(&uMoveFlags, base, current);
  current = ptr + 0x3c;
  readData(&uAckValue, base, current);
  current = ptr + 0x44;
  readData(&uCameraSmoothingTime, base, current);
  current = ptr + 0x4c;
  readData(&unk_91b31d5, base, current);
  ptr += 0x54;
}
