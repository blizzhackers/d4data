/**
 * Definition: tece011d4
 * Hash: ece011d4
 */

#include "tece011d4.h"

void tece011d4::read(const char* base, char* &ptr) {
  readData(&aabbBounds, base, ptr);
  readData(&unk_d9fe6f6, base, ptr);
  readData(&unk_4137988, base, ptr);
  readData(&unk_7ef82a3, base, ptr);
  readData(&unk_8c8b576, base, ptr);
  readData(&ibid, base, ptr);
}
