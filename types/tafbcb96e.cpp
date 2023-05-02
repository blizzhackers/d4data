/**
 * Definition: tafbcb96e
 * Hash: afbcb96e
 */

#include "tafbcb96e.h"

void tafbcb96e::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_77f305a, base, current);
  current = ptr + 0x4;
  readData(&unk_31b7df8, base, current);
  current = ptr + 0x8;
  readData(&unk_608e9e, base, current);
  current = ptr + 0x20;
  readData(&unk_b317460, base, current);
  current = ptr + 0x28;
  readData(&unk_871eac9, base, current);
  ptr += 0x40;
}
