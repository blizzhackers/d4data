/**
 * Definition: td336603d
 * Hash: d336603d
 */

#include "td336603d.h"

void td336603d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&dwTime, base, current);
  current = ptr + 0x14;
  readData(&unk_dce541c, base, current);
  ptr += 0x18;
}
