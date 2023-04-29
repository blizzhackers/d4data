/**
 * Definition: t6879d173
 * Hash: 6879d173
 */

#include "t6879d173.h"

void t6879d173::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&uData, base, ptr);
}
