/**
 * Definition: t15695a85
 * Hash: 15695a85
 */

#include "t15695a85.h"

void t15695a85::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_3580552, base, current);
  current = ptr + 0x14;
  readData(&unk_a3f1699, base, current);
  current = ptr + 0x18;
  readData(&unk_ecc987f, base, current);
  current = ptr + 0x1c;
  readData(&flCapsuleLength, base, current);
  current = ptr + 0x20;
  readData(&unk_8a404eb, base, current);
  current = ptr + 0x24;
  readData(&unk_e354a1f, base, current);
  current = ptr + 0x28;
  readData(&unk_4a4ab0e, base, current);
  ptr += 0x38;
}
