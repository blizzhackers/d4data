/**
 * Definition: t8e64b090
 * Hash: 8e64b090
 */

#include "t8e64b090.h"

void t8e64b090::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&szMarkerName, base, ptr);
  readData(&snoSubzone, base, ptr);
  readData(&snoQuest, base, ptr);
}
