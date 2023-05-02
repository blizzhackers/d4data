/**
 * Definition: t4e8e96e4
 * Hash: 4e8e96e4
 */

#include "t4e8e96e4.h"

void t4e8e96e4::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoSubzone, base, current);
  current = ptr + 0x4;
  readData(&unk_efcdea5, base, current);
  ptr += 0x8;
}
