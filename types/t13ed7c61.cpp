/**
 * Definition: t13ed7c61
 * Hash: 13ed7c61
 */

#include "t13ed7c61.h"

void t13ed7c61::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoGizmo, base, ptr);
  readData(&wpLocation, base, ptr);
  readData(&unk_1751d86, base, ptr);
}
