/**
 * Definition: t7acab63b
 * Hash: 7acab63b
 */

#include "t7acab63b.h"

void t7acab63b::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_f28e177, base, current);
  current = ptr + 0x4;
  readData(&unk_da03493, base, current);
  current = ptr + 0x8;
  readData(&unk_565e352, base, current);
  current = ptr + 0x40;
  readData(&unk_8ad8da, base, current);
  current = ptr + 0x78;
  readData(&unk_78ac986, base, current);
  current = ptr + 0xb0;
  readData(&unk_c1cc405, base, current);
  current = ptr + 0xb8;
  readData(&unk_af3caab, base, current);
  ptr += 0xc0;
}
