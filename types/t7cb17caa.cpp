/**
 * Definition: t7cb17caa
 * Hash: 7cb17caa
 */

#include "t7cb17caa.h"

void t7cb17caa::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
  readData(&unk_224db6f, base, ptr);
  readData(&unk_781a1ac, base, ptr);
}
