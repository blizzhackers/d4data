/**
 * Definition: te6f4bbd7
 * Hash: e6f4bbd7
 */

#include "te6f4bbd7.h"

void te6f4bbd7::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x104;
  readData(&eScope, base, current);
  current = ptr + 0x108;
  readData(&eType, base, current);
  current = ptr + 0x10c;
  readData(&nDefaultValue, base, current);
  current = ptr + 0x110;
  readData(&unk_9e4e90a, base, current);
  current = ptr + 0x114;
  readData(&eGameReset, base, current);
  current = ptr + 0x118;
  readData(&unk_e616755, base, current);
  current = ptr + 0x11c;
  readData(&unk_c24a257, base, current);
  current = ptr + 0x120;
  readData(&unk_387f176, base, current);
  current = ptr + 0x124;
  readData(&unk_5574b39, base, current);
  current = ptr + 0x128;
  readData(&unk_8cfb605, base, current);
  current = ptr + 0x130;
  readData(&unk_2bbc72e, base, current);
  ptr += 0x140;
}
