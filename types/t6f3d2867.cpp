/**
 * Definition: t6f3d2867
 * Hash: 6f3d2867
 */

#include "t6f3d2867.h"

void t6f3d2867::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_ad6e729, base, current);
  current = ptr + 0x4;
  readData(&unk_a3af342, base, current);
  current = ptr + 0x8;
  readData(&unk_e71b50, base, current);
  current = ptr + 0xc;
  readData(&unk_496ba25, base, current);
  current = ptr + 0x10;
  readData(&unk_3347283, base, current);
  current = ptr + 0x14;
  readData(&unk_dce555f, base, current);
  current = ptr + 0x18;
  readData(&eCurrencyType, base, current);
  current = ptr + 0x1c;
  readData(&dwCurrencyAmount, base, current);
  current = ptr + 0x20;
  readData(&unk_c605c30, base, current);
  ptr += 0x24;
}
