/**
 * Definition: UIMargins
 * Hash: 1de9164f
 */

#include "UIMargins.h"

void UIMargins::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&flLeft, base, current);
  current = ptr + 0x4;
  readData(&flTop, base, current);
  current = ptr + 0x8;
  readData(&flRight, base, current);
  current = ptr + 0xc;
  readData(&flBottom, base, current);
  ptr += 0x10;
}
