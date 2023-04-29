/**
 * Definition: InterpolationScalar
 * Hash: 3b1da8de
 */

#include "InterpolationScalar.h"

void InterpolationScalar::read(const char* base, char* &ptr) {
  readData(&nScalarFunction, base, ptr);
  readData(&dwFlags, base, ptr);
  readData(&unk_2424d91, base, ptr);
  readData(&BtnMedium_SelectedDefinition, base, ptr);
  readData(&unk_3599c51, base, ptr);
  readData(&szFormulaName, base, ptr);
}
