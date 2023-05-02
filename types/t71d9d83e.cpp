/**
 * Definition: t71d9d83e
 * Hash: 71d9d83e
 */

#include "t71d9d83e.h"

void t71d9d83e::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_3aee15f, base, current);
  current = ptr + 0x4;
  readData(&unk_92b64ea, base, current);
  current = ptr + 0x8;
  readData(&unk_a9bcc07, base, current);
  current = ptr + 0xc;
  readData(&unk_9f7f279, base, current);
  current = ptr + 0x10;
  readData(&unk_f627e78, base, current);
  current = ptr + 0x14;
  readData(&unk_98107be, base, current);
  ptr += 0x18;
}
