/**
 * Definition: t8e64b090
 * Hash: 8e64b090
 */

#include "t8e64b090.h"

void t8e64b090::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&szMarkerName, base, current);
  current = ptr + 0x50;
  readData(&snoSubzone, base, current);
  current = ptr + 0x54;
  readData(&snoQuest, base, current);
  ptr += 0x58;
}
