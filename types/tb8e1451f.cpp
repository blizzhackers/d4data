/**
 * Definition: tb8e1451f
 * Hash: b8e1451f
 */

#include "tb8e1451f.h"

void tb8e1451f::read(const char* base, char* &ptr) {
  readData(&unk_ce9c86f, base, ptr);
  readData(&unk_ce9c870, base, ptr);
  readData(&wWorldEntry, base, ptr);
  readData(&unk_1f677f2, base, ptr);
  readData(&unk_1f677f3, base, ptr);
  readData(&unk_1f677f4, base, ptr);
  readData(&nIndex, base, ptr);
  readData(&dwIncludeMask, base, ptr);
  readData(&dwAxis, base, ptr);
  readData(&dwTriangleCount, base, ptr);
}
