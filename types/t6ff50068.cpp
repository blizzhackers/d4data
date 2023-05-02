/**
 * Definition: t6ff50068
 * Hash: 6ff50068
 */

#include "t6ff50068.h"

void t6ff50068::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x14;
  readData(&unk_dce541c, base, current);
  current = ptr + 0x18;
  readData(&snoLevelArea, base, current);
  current = ptr + 0x1c;
  readData(&unk_fcdc6f6, base, current);
  ptr += 0x20;
}
