/**
 * Definition: DebugDrawPrimMessage
 * Hash: b5b66092
 */

#include "DebugDrawPrimMessage.h"

void DebugDrawPrimMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&uID, base, ptr);
  readData(&eType, base, ptr);
  readData(&idSWorld, base, ptr);
  readData(&vecPos, base, ptr);
  readData(&flLength, base, ptr);
  readData(&flRadius, base, ptr);
  readData(&flHeight, base, ptr);
  readData(&uLifetimeInTicks, base, ptr);
  readData(&rgbaColor, base, ptr);
  readData(&szText, base, ptr);
  readData(&unk_7fff437, base, ptr);
  readData(&bONZ, base, ptr);
}
