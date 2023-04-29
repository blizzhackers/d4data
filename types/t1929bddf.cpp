/**
 * Definition: t1929bddf
 * Hash: 1929bddf
 */

#include "t1929bddf.h"

void t1929bddf::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&idQuest, base, ptr);
  readData(&unk_2f41f03, base, ptr);
}
