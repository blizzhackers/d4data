/**
 * Definition: t6ff50068
 * Hash: 6ff50068
 */

#include "t6ff50068.h"

void t6ff50068::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_dce541c, base, ptr);
  readData(&snoLevelArea, base, ptr);
  readData(&unk_fcdc6f6, base, ptr);
}
