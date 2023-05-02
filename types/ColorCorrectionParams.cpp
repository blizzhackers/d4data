/**
 * Definition: ColorCorrectionParams
 * Hash: 756e437b
 */

#include "ColorCorrectionParams.h"

void ColorCorrectionParams::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_ba29200, base, current);
  ptr += 0x10;
}
