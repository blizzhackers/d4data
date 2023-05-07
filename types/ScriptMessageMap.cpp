/**
 * Definition: ScriptMessageMap
 * Hash: aef164d8
 */

#include "ScriptMessageMap.h"

void ScriptMessageMap::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eEventType, base, current);
  current = ptr + 0x4;
  readData(&dwListenerFlags, base, current);
  current = ptr + 0x8;
  readData(&snoCondition, base, current);
  current = ptr + 0xc;
  readData(&unk_c3ba01d, base, current);
  current = ptr + 0x10;
  readData(&flCooldownSeconds, base, current);
  current = ptr + 0x18;
  readData(&unk_2b204ee, base, current);
  current = ptr + 0x28;
  readData(&unk_492729e, base, current);
  current = ptr + 0x40;
  readData(&unk_9927fd3, base, current);
  ptr += 0x48;
}
