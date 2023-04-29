/**
 * Definition: t19b25a8
 * Hash: 19b25a8
 */

#include "t19b25a8.h"

void t19b25a8::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&unk_3580552, base, ptr);
  readData(&unk_a3f1699, base, ptr);
  readData(&unk_4a4ab0e, base, ptr);
  readData(&unk_919e5f8, base, ptr);
  readData(&eType, base, ptr);
  readData(&unk_c3535ed, base, ptr);
  readData(&dwPad, base, ptr);
}
