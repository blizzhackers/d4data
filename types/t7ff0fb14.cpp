/**
 * Definition: t7ff0fb14
 * Hash: 7ff0fb14
 */

#include "t7ff0fb14.h"

void t7ff0fb14::read(const char* base, char* &ptr) {
  readData(&normal, base, ptr);
  readData(&area, base, ptr);
  readData(&i1, base, ptr);
  readData(&i2, base, ptr);
  readData(&i3, base, ptr);
  readData(&unk_5b98999, base, ptr);
  readData(&padding, base, ptr);
}
