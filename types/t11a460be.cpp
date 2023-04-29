/**
 * Definition: t11a460be
 * Hash: 11a460be
 */

#include "t11a460be.h"

void t11a460be::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_dce541c, base, ptr);
}
