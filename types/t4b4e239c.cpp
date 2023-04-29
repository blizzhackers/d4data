/**
 * Definition: t4b4e239c
 * Hash: 4b4e239c
 */

#include "t4b4e239c.h"

void t4b4e239c::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&eCrafterType, base, ptr);
}
