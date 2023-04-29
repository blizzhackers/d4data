/**
 * Definition: t46daa108
 * Hash: 46daa108
 */

#include "t46daa108.h"

void t46daa108::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_5d2c092, base, ptr);
}
