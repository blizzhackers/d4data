/**
 * Definition: tb9be6132
 * Hash: b9be6132
 */

#include "tb9be6132.h"

void tb9be6132::read(const char* base, char* &ptr) {
  readData(&szName, base, ptr);
  readData(&tFormula, base, ptr);
  readData(&flDefaultValue, base, ptr);
  readData(&unk_c0f4112, base, ptr);
  readData(&bIsGlobal, base, ptr);
}
