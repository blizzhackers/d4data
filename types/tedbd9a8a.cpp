/**
 * Definition: tedbd9a8a
 * Hash: edbd9a8a
 */

#include "tedbd9a8a.h"

void tedbd9a8a::read(const char* base, char* &ptr) {
  readData(&dwFlags, base, ptr);
  readData(&unk_32bf9c6, base, ptr);
  readData(&unk_f116b76, base, ptr);
  readData(&nFadeGroup, base, ptr);
  readData(&unk_d094b9a, base, ptr);
  readData(&unk_4bfd602, base, ptr);
  readData(&unk_6c0cb90, base, ptr);
  readData(&unk_dc9436d, base, ptr);
  readData(&unk_b0425e7, base, ptr);
}
