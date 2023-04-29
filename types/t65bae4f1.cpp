/**
 * Definition: t65bae4f1
 * Hash: 65bae4f1
 */

#include "t65bae4f1.h"

void t65bae4f1::read(const char* base, char* &ptr) {
  readData(&snoItem, base, ptr);
  readData(&nCount, base, ptr);
}
