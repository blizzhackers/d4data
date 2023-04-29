/**
 * Definition: te17a1529
 * Hash: e17a1529
 */

#include "te17a1529.h"

void te17a1529::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_d192efe, base, ptr);
  readData(&unk_ad7dd9c, base, ptr);
  readData(&unk_111c745, base, ptr);
}
