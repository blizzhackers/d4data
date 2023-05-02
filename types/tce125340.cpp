/**
 * Definition: tce125340
 * Hash: ce125340
 */

#include "tce125340.h"

void tce125340::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&szName, base, current);
  current = ptr + 0x20;
  readData(&snoWorld, base, current);
  current = ptr + 0x24;
  readData(&unk_d6d0056, base, current);
  ptr += 0x28;
}
