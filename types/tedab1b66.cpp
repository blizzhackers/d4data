/**
 * Definition: tedab1b66
 * Hash: edab1b66
 */

#include "tedab1b66.h"

void tedab1b66::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szName, base, current);
  current = ptr + 0x4;
  readData(&hLabel, base, current);
  current = ptr + 0xc;
  readData(&snoNormal, base, current);
  current = ptr + 0x10;
  readData(&unk_829b337, base, current);
  current = ptr + 0x14;
  readData(&unk_25e61ae, base, current);
  current = ptr + 0x18;
  readData(&hIcon, base, current);
  ptr += 0x1c;
}
