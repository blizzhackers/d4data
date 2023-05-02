/**
 * Definition: t9cc6c34f
 * Hash: 9cc6c34f
 */

#include "t9cc6c34f.h"

void t9cc6c34f::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&snoActor, base, current);
  current = ptr + 0x1c;
  readData(&unk_39ae9c2, base, current);
  current = ptr + 0xa0;
  readData(&unk_ed94303, base, current);
  current = ptr + 0xac;
  readData(&unk_5cc9c95, base, current);
  current = ptr + 0x418;
  readData(&unk_462cedb, base, current);
  current = ptr + 0x428;
  readData(&unk_61a5ad0, base, current);
  current = ptr + 0x464;
  readData(&unk_223db49, base, current);
  ptr += 0x480;
}
