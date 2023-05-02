/**
 * Definition: t7ff0fb14
 * Hash: 7ff0fb14
 */

#include "t7ff0fb14.h"

void t7ff0fb14::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&normal, base, current);
  current = ptr + 0x10;
  readData(&area, base, current);
  current = ptr + 0x14;
  readData(&i1, base, current);
  current = ptr + 0x16;
  readData(&i2, base, current);
  current = ptr + 0x18;
  readData(&i3, base, current);
  current = ptr + 0x1a;
  readData(&unk_5b98999, base, current);
  current = ptr + 0x1c;
  readData(&padding, base, current);
  ptr += 0x20;
}
