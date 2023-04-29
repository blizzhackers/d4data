/**
 * Definition: t15695a85
 * Hash: 15695a85
 */

#include "t15695a85.h"

void t15695a85::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_3580552, base, ptr);
  readData(&unk_a3f1699, base, ptr);
  readData(&unk_ecc987f, base, ptr);
  readData(&flCapsuleLength, base, ptr);
  readData(&unk_8a404eb, base, ptr);
  readData(&unk_e354a1f, base, ptr);
}
