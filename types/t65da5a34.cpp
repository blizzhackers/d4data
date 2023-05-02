/**
 * Definition: t65da5a34
 * Hash: 65da5a34
 */

#include "t65da5a34.h"

void t65da5a34::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoConversations, base, current);
  ptr += 0x14;
}
