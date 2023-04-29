/**
 * Definition: td336603d
 * Hash: d336603d
 */

#include "td336603d.h"

void td336603d::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&dwTime, base, ptr);
  readData(&unk_dce541c, base, ptr);
}
