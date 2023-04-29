/**
 * Definition: td27e269a
 * Hash: d27e269a
 */

#include "td27e269a.h"

void td27e269a::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_6f325d2, base, ptr);
  readData(&unk_6ccc3cf, base, ptr);
  readData(&unk_6b198fe, base, ptr);
  readData(&unk_2da258, base, ptr);
  readData(&unk_74b00e3, base, ptr);
  readData(&unk_aa2399c, base, ptr);
  readData(&unk_855d467, base, ptr);
  readData(&unk_908474b, base, ptr);
  readData(&unk_408865c, base, ptr);
}
