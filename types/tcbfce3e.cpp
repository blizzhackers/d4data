/**
 * Definition: tcbfce3e
 * Hash: cbfce3e
 */

#include "tcbfce3e.h"

void tcbfce3e::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&unk_3580552, base, current);
  current = ptr + 0x14;
  readData(&unk_a3f1699, base, current);
  current = ptr + 0x18;
  readData(&unk_4a4ab0e, base, current);
  current = ptr + 0x28;
  readData(&unk_919e5f8, base, current);
  current = ptr + 0x2c;
  readData(&eType, base, current);
  current = ptr + 0x30;
  readData(&unk_c3535ed, base, current);
  current = ptr + 0x34;
  readData(&dwPad, base, current);
  ptr += 0x38;
}
