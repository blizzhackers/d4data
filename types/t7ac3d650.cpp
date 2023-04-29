/**
 * Definition: t7ac3d650
 * Hash: 7ac3d650
 */

#include "t7ac3d650.h"

void t7ac3d650::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&nCrafterType, base, ptr);
}
