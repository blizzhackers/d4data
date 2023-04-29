/**
 * Definition: tcc354444
 * Hash: cc354444
 */

#include "tcc354444.h"

void tcc354444::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ptArrayNodes, base, ptr);
}
