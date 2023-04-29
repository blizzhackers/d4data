/**
 * Definition: t4c5f5791
 * Hash: 4c5f5791
 */

#include "t4c5f5791.h"

void t4c5f5791::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_dce541c, base, ptr);
  readData(&snoQuest, base, ptr);
  readData(&unk_588bc43, base, ptr);
}
