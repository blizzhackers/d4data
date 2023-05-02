/**
 * Definition: teda64360
 * Hash: eda64360
 */

#include "teda64360.h"

void teda64360::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwID, base, current);
  current = ptr + 0x4;
  readData(&unk_28ca84b, base, current);
  current = ptr + 0x8;
  readData(&unk_538cbc1, base, current);
  current = ptr + 0x10;
  readData(&unk_6752f3b, base, current);
  ptr += 0x20;
}
