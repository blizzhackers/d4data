/**
 * Definition: DebugDrawPrimMessage
 * Hash: b5b66092
 */

#include "DebugDrawPrimMessage.h"

void DebugDrawPrimMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&uID, base, current);
  current = ptr + 0x14;
  readData(&eType, base, current);
  current = ptr + 0x18;
  readData(&idSWorld, base, current);
  current = ptr + 0x20;
  readData(&vecPos, base, current);
  current = ptr + 0x84;
  readData(&flLength, base, current);
  current = ptr + 0x88;
  readData(&flRadius, base, current);
  current = ptr + 0x8c;
  readData(&flHeight, base, current);
  current = ptr + 0x90;
  readData(&uLifetimeInTicks, base, current);
  current = ptr + 0x94;
  readData(&rgbaColor, base, current);
  current = ptr + 0x98;
  readData(&szText, base, current);
  current = ptr + 0x118;
  readData(&unk_7fff437, base, current);
  current = ptr + 0x11c;
  readData(&bONZ, base, current);
  ptr += 0x120;
}
