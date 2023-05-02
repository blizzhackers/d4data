/**
 * Definition: tf619930a
 * Hash: f619930a
 */

#include "tf619930a.h"

void tf619930a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_ae89102, base, current);
  current = ptr + 0x4;
  readData(&unk_574d429, base, current);
  current = ptr + 0x8;
  readData(&unk_fa38d2e, base, current);
  ptr += 0xc;
}
