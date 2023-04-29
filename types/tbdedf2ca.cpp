/**
 * Definition: tbdedf2ca
 * Hash: bdedf2ca
 */

#include "tbdedf2ca.h"

void tbdedf2ca::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_cf3ce, base, ptr);
  readData(&unk_bbc67ad, base, ptr);
  readData(&unk_3ef8e38, base, ptr);
  readData(&ptNextNode, base, ptr);
  readData(&dwFlags, base, ptr);
  readData(&szComment, base, ptr);
  readData(&unk_f44b6d4, base, ptr);
  readData(&unk_1d53cd7, base, ptr);
}
