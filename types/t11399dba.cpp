/**
 * Definition: t11399dba
 * Hash: 11399dba
 */

#include "t11399dba.h"

void t11399dba::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&idSGame, base, current);
  current = ptr + 0x14;
  readData(&eXLocale, base, current);
  current = ptr + 0x18;
  readData(&flAspectRatio, base, current);
  current = ptr + 0x1c;
  readData(&uProtocolHash, base, current);
  current = ptr + 0x20;
  readData(&bSPlayers, base, current);
  ptr += 0x158;
}
