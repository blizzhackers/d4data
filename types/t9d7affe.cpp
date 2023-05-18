/**
 * Definition: t9d7affe
 * Hash: 9d7affe
 */

#include "t9d7affe.h"

void t9d7affe::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_247a8fe, base, current);
  current = ptr + 0x18;
  readData(&arConditions, base, current);
  current = ptr + 0x30;
  readData(&unk_b5ce76e, base, current);
  current = ptr + 0x34;
  readData(&unk_74544d1, base, current);
  current = ptr + 0x38;
  readData(&unk_9e5b233, base, current);
  current = ptr + 0x40;
  readData(&arThresholds, base, current);
  ptr += 0x50;
}
