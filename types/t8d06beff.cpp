/**
 * Definition: t8d06beff
 * Hash: 8d06beff
 */

#include "t8d06beff.h"

void t8d06beff::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoAchievement, base, ptr);
}
