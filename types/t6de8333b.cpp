/**
 * Definition: t6de8333b
 * Hash: 6de8333b
 */

#include "t6de8333b.h"

void t6de8333b::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_8da6c51, base, current);
  current = ptr + 0x4;
  readData(&unk_38cc238, base, current);
  current = ptr + 0x36;
  readData(&unk_68e4d62, base, current);
  current = ptr + 0x136;
  readData(&unk_9bec2e, base, current);
  current = ptr + 0x168;
  readData(&unk_f0e97d8, base, current);
  current = ptr + 0x268;
  readData(&unk_755cb61, base, current);
  current = ptr + 0x26c;
  readData(&unk_2b8dba4, base, current);
  ptr += 0x270;
}
