/**
 * Definition: t9d3b6a4a
 * Hash: 9d3b6a4a
 */

#include "t9d3b6a4a.h"

void t9d3b6a4a::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_dce541c, base, ptr);
  readData(&snoQuest, base, ptr);
}
