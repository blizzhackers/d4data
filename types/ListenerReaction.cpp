/**
 * Definition: ListenerReaction
 * Hash: 37c232db
 */

#include "ListenerReaction.h"

void ListenerReaction::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoListener, base, current);
  current = ptr + 0x4;
  readData(&unk_bcac396, base, current);
  ptr += 0xc;
}
