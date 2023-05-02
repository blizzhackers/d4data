/**
 * Definition: ACDTranslateNormalMessage
 * Hash: 6ba8f5e4
 */

#include "ACDTranslateNormalMessage.h"

void ACDTranslateNormalMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&vDest, base, current);
  current = ptr + 0x28;
  readData(&aDesiredYaw, base, current);
  current = ptr + 0x30;
  readData(&bSnapFacing, base, current);
  current = ptr + 0x38;
  readData(&flMovementSpeed, base, current);
  current = ptr + 0x40;
  readData(&uMoveFlags, base, current);
  current = ptr + 0x48;
  readData(&unk_2a6bbab, base, current);
  current = ptr + 0x50;
  readData(&snoPowerPassability, base, current);
  current = ptr + 0x58;
  readData(&uAckValue, base, current);
  current = ptr + 0x60;
  readData(&eMoveType, base, current);
  ptr += 0x68;
}
