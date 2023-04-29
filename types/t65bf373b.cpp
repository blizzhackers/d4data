/**
 * Definition: t65bf373b
 * Hash: 65bf373b
 */

#include "t65bf373b.h"

void t65bf373b::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&nNewLevel, base, ptr);
  readData(&nMaxLevel, base, ptr);
  readData(&snoItem, base, ptr);
}
