/**
 * Definition: t11399dba
 * Hash: 11399dba
 */

#include "t11399dba.h"

void t11399dba::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&idSGame, base, ptr);
  readData(&eXLocale, base, ptr);
  readData(&flAspectRatio, base, ptr);
  readData(&uProtocolHash, base, ptr);
  readData(&bSPlayers, base, ptr);
}
