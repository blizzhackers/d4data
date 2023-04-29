/**
 * Definition: t5960905c
 * Hash: 5960905c
 */

#include "t5960905c.h"

void t5960905c::read(const char* base, char* &ptr) {
  readData(&unk_3cdcdff, base, ptr);
  readData(&rgbaColor, base, ptr);
  readData(&unk_4b95c37, base, ptr);
  readData(&unk_be4fdf8, base, ptr);
  readData(&unk_74b9406, base, ptr);
  readData(&flFadeInTime, base, ptr);
}
