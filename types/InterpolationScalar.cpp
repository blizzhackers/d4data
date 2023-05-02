/**
 * Definition: InterpolationScalar
 * Hash: 3b1da8de
 */

#include "InterpolationScalar.h"

void InterpolationScalar::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nScalarFunction, base, current);
  current = ptr + 0x4;
  readData(&dwFlags, base, current);
  current = ptr + 0x8;
  readData(&unk_2424d91, base, current);
  current = ptr + 0x10;
  readData(&BtnMedium_SelectedDefinition, base, current);
  current = ptr + 0x18;
  readData(&unk_3599c51, base, current);
  current = ptr + 0x1c;
  readData(&szFormulaName, base, current);
  ptr += 0x20;
}
