/**
 * Definition: t313c5815
 * Hash: 313c5815
 */

#include "t313c5815.h"

void t313c5815::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_ce10c35, base, ptr);
  readData(&unk_43081cf, base, ptr);
  readData(&unk_cd7797a, base, ptr);
}
