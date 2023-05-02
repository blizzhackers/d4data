/**
 * Definition: tb9be6132
 * Hash: b9be6132
 */

#include "tb9be6132.h"

void tb9be6132::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szName, base, current);
  current = ptr + 0x8;
  readData(&tFormula, base, current);
  current = ptr + 0x28;
  readData(&flDefaultValue, base, current);
  current = ptr + 0x2c;
  readData(&unk_c0f4112, base, current);
  current = ptr + 0x30;
  readData(&bIsGlobal, base, current);
  ptr += 0x38;
}
