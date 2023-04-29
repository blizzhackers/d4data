/**
 * Definition: GameErrorData
 * Hash: dda33f9e
 */

#include "GameErrorData.h"

void GameErrorData::read(const char* base, char* &ptr) {
  readData(&eError, base, ptr);
  readData(&dwVal, base, ptr);
}
