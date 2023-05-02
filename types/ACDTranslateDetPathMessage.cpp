/**
 * Definition: ACDTranslateDetPathMessage
 * Hash: f3b61c45
 */

#include "ACDTranslateDetPathMessage.h"

void ACDTranslateDetPathMessage::read(const char* base, char* &ptr) {
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
  readData(&vTargetPos, base, current);
  current = ptr + 0x4c;
  readData(&uMoveFlags, base, current);
  current = ptr + 0x50;
  readData(&snoPowerPassability, base, current);
  current = ptr + 0x54;
  readData(&unk_7f07229, base, current);
  current = ptr + 0x58;
  readData(&flVar0, base, current);
  current = ptr + 0x5c;
  readData(&flVar1, base, current);
  current = ptr + 0x60;
  readData(&flVar2, base, current);
  current = ptr + 0x64;
  readData(&flVar3, base, current);
  current = ptr + 0x68;
  readData(&flVar4, base, current);
  current = ptr + 0x6c;
  readData(&flSpeedMult, base, current);
  ptr += 0x70;
}
