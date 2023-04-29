/**
 * Definition: t363d95fb
 * Hash: 363d95fb
 */

#include "t363d95fb.h"

void t363d95fb::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_f9c5be7, base, ptr);
  readData(&snoSubzone, base, ptr);
  readData(&dwStartTime, base, ptr);
  readData(&dwEndTime, base, ptr);
  readData(&snoQuest, base, ptr);
  readData(&wpLocation, base, ptr);
  readData(&unk_433bf34, base, ptr);
}
