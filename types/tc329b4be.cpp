/**
 * Definition: tc329b4be
 * Hash: c329b4be
 */

#include "tc329b4be.h"

void tc329b4be::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_445de3c, base, current);
  current = ptr + 0x4;
  readData(&snoTexture, base, current);
  current = ptr + 0x8;
  readData(&unk_df4022d, base, current);
  current = ptr + 0x10;
  readData(&unk_f497881, base, current);
  ptr += 0x18;
}
