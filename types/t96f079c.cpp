/**
 * Definition: t96f079c
 * Hash: 96f079c
 */

#include "t96f079c.h"

void t96f079c::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&iConsoleQuest, base, ptr);
}
