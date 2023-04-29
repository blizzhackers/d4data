/**
 * Definition: t97ec6167
 * Hash: 97ec6167
 */

#include "t97ec6167.h"

void t97ec6167::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoScroll, base, ptr);
  readData(&unk_14e1214, base, ptr);
}
