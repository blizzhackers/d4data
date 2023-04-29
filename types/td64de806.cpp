/**
 * Definition: td64de806
 * Hash: d64de806
 */

#include "td64de806.h"

void td64de806::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_d192efe, base, ptr);
}
