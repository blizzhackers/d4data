/**
 * Definition: ta7197c02
 * Hash: a7197c02
 */

#include "ta7197c02.h"

void ta7197c02::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_7e913e4, base, current);
  current = ptr + 0x4;
  readData(&unk_fec1a8e, base, current);
  current = ptr + 0x8;
  readData(&unk_99110e9, base, current);
  current = ptr + 0x10;
  readData(&unk_490df55, base, current);
  ptr += 0x20;
}
