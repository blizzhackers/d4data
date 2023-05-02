/**
 * Definition: t3c7c9170
 * Hash: 3c7c9170
 */

#include "t3c7c9170.h"

void t3c7c9170::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoConversation, base, current);
  current = ptr + 0x4;
  readData(&unk_cf3ce, base, current);
  ptr += 0x8;
}
