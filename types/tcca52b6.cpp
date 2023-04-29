/**
 * Definition: tcca52b6
 * Hash: cca52b6
 */

#include "tcca52b6.h"

void tcca52b6::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&bSuccess, base, ptr);
  readData(&annItem, base, ptr);
}
