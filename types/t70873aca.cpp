/**
 * Definition: t70873aca
 * Hash: 70873aca
 */

#include "t70873aca.h"

void t70873aca::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoRecipe, base, ptr);
  readData(&uAmount, base, ptr);
}
