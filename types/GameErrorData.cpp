/**
 * Definition: GameErrorData
 * Hash: dda33f9e
 */

#include "GameErrorData.h"

void GameErrorData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eError, base, current);
  current = ptr + 0x4;
  readData(&dwVal, base, current);
  ptr += 0x8;
}
