/**
 * Definition: t4c5f5791
 * Hash: 4c5f5791
 */

#include "t4c5f5791.h"

void t4c5f5791::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_dce541c, base, current);
  current = ptr + 0x14;
  readData(&snoQuest, base, current);
  current = ptr + 0x18;
  readData(&unk_588bc43, base, current);
  ptr += 0x1c;
}
