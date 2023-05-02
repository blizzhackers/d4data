/**
 * Definition: tb8e1451f
 * Hash: b8e1451f
 */

#include "tb8e1451f.h"

void tb8e1451f::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_ce9c86f, base, current);
  current = ptr + 0x4;
  readData(&unk_ce9c870, base, current);
  current = ptr + 0x8;
  readData(&wWorldEntry, base, current);
  current = ptr + 0xc;
  readData(&unk_1f677f2, base, current);
  current = ptr + 0x10;
  readData(&unk_1f677f3, base, current);
  current = ptr + 0x14;
  readData(&unk_1f677f4, base, current);
  current = ptr + 0x18;
  readData(&nIndex, base, current);
  current = ptr + 0x1c;
  readData(&dwIncludeMask, base, current);
  current = ptr + 0x1e;
  readData(&dwAxis, base, current);
  current = ptr + 0x1f;
  readData(&dwTriangleCount, base, current);
  ptr += 0x20;
}
