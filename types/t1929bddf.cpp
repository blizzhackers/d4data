/**
 * Definition: t1929bddf
 * Hash: 1929bddf
 */

#include "t1929bddf.h"

void t1929bddf::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&idQuest, base, current);
  current = ptr + 0x14;
  readData(&unk_2f41f03, base, current);
  ptr += 0x18;
}
