/**
 * Definition: t10796418
 * Hash: 10796418
 */

#include "t10796418.h"

void t10796418::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoWorld, base, ptr);
  readData(&snoSubzone, base, ptr);
}
