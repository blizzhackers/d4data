/**
 * Definition: tfa73270e
 * Hash: fa73270e
 */

#include "tfa73270e.h"

void tfa73270e::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_5770323, base, ptr);
  readData(&unk_441f783, base, ptr);
  readData(&unk_b835d15, base, ptr);
  readData(&unk_db47553, base, ptr);
}
