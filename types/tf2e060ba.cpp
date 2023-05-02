/**
 * Definition: tf2e060ba
 * Hash: f2e060ba
 */

#include "tf2e060ba.h"

void tf2e060ba::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_bafabd7, base, current);
  current = ptr + 0x4;
  readData(&unk_7760c7f, base, current);
  current = ptr + 0x8;
  readData(&unk_75b4c82, base, current);
  current = ptr + 0xc;
  readData(&unk_e9925d8, base, current);
  current = ptr + 0x10;
  readData(&unk_97f6c1c, base, current);
  current = ptr + 0x14;
  readData(&unk_13b075f, base, current);
  ptr += 0x18;
}
