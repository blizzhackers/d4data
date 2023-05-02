/**
 * Definition: ACDTranslateDetPathSinMessage
 * Hash: d970900f
 */

#include "ACDTranslateDetPathSinMessage.h"

void ACDTranslateDetPathSinMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&eDPath, base, current);
  current = ptr + 0x1c;
  readData(&tSeed, base, current);
  current = ptr + 0x24;
  readData(&wvVelocity, base, current);
  current = ptr + 0x30;
  readData(&aOriginalYaw, base, current);
  current = ptr + 0x34;
  readData(&vStartPos, base, current);
  current = ptr + 0x40;
  readData(&uMoveFlags, base, current);
  current = ptr + 0x44;
  readData(&snoPowerPassability, base, current);
  current = ptr + 0x48;
  readData(&unk_7f07229, base, current);
  current = ptr + 0x4c;
  readData(&flVar0, base, current);
  current = ptr + 0x50;
  readData(&tSinData, base, current);
  current = ptr + 0x70;
  readData(&flSpeedMult, base, current);
  ptr += 0x74;
}
