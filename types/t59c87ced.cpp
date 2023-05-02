/**
 * Definition: t59c87ced
 * Hash: 59c87ced
 */

#include "t59c87ced.h"

void t59c87ced::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoConversations, base, current);
  ptr += 0x1c;
}
