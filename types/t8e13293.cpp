/**
 * Definition: t8e13293
 * Hash: 8e13293
 */

#include "t8e13293.h"

void t8e13293::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_dce541c, base, ptr);
  readData(&snoEmblem, base, ptr);
}
