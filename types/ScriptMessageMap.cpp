/**
 * Definition: ScriptMessageMap
 * Hash: aef164d8
 */

#include "ScriptMessageMap.h"

void ScriptMessageMap::read(const char* base, char* &ptr) {
  readData(&eEventType, base, ptr);
  readData(&dwListenerFlags, base, ptr);
  readData(&snoCondition, base, ptr);
  readData(&uGameIterate, base, ptr);
  readData(&unk_18defa6, base, ptr);
  readData(&unk_2b204ee, base, ptr);
  readData(&unk_492729e, base, ptr);
  readData(&unk_9927fd3, base, ptr);
}
