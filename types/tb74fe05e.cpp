/**
 * Definition: tb74fe05e
 * Hash: b74fe05e
 */

#include "tb74fe05e.h"

void tb74fe05e::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&idQuest, base, current);
  current = ptr + 0x14;
  readData(&unk_d0089db, base, current);
  current = ptr + 0x18;
  readData(&nMonstersKilled, base, current);
  current = ptr + 0x1c;
  readData(&unk_736a201, base, current);
  ptr += 0x20;
}
