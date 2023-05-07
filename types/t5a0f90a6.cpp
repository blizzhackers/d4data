/**
 * Definition: t5a0f90a6
 * Hash: 5a0f90a6
 */

#include "t5a0f90a6.h"

void t5a0f90a6::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoStartQuest, base, current);
  current = ptr + 0x8;
  readData(&arActivityQuests, base, current);
  current = ptr + 0x18;
  readData(&unk_6cc9ab2, base, current);
  current = ptr + 0x28;
  readData(&unk_c25c9f0, base, current);
  current = ptr + 0x2c;
  readData(&unk_9f4512f, base, current);
  current = ptr + 0x38;
  readData(&unk_8649a3e, base, current);
  current = ptr + 0x44;
  readData(&unk_85f303c, base, current);
  ptr += 0x50;
}
