/**
 * Definition: t6fc00b65
 * Hash: 6fc00b65
 */

#include "t6fc00b65.h"

void t6fc00b65::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&tItemId, base, ptr);
  readData(&unk_cc95a19, base, ptr);
}
