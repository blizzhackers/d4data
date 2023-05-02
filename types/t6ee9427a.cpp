/**
 * Definition: t6ee9427a
 * Hash: 6ee9427a
 */

#include "t6ee9427a.h"

void t6ee9427a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_334eb2d, base, current);
  current = ptr + 0x8;
  readData(&ptMsgTriggeredEvents, base, current);
  ptr += 0x18;
}
