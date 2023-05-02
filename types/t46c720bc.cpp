/**
 * Definition: t46c720bc
 * Hash: 46c720bc
 */

#include "t46c720bc.h"

void t46c720bc::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_9b2bc26, base, current);
  ptr += 0x30;
}
