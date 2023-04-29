/**
 * Definition: tb74fe05e
 * Hash: b74fe05e
 */

#include "tb74fe05e.h"

void tb74fe05e::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&idQuest, base, ptr);
  readData(&unk_d0089db, base, ptr);
  readData(&nMonstersKilled, base, ptr);
  readData(&unk_736a201, base, ptr);
}
