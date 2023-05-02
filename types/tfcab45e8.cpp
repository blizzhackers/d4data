/**
 * Definition: tfcab45e8
 * Hash: fcab45e8
 */

#include "tfcab45e8.h"

void tfcab45e8::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_7cb44e7, base, current);
  current = ptr + 0x14;
  readData(&unk_b0a3524, base, current);
  current = ptr + 0x18;
  readData(&unk_6a40877, base, current);
  ptr += 0x1c;
}
