/**
 * Definition: ACDChangeActorMessage
 * Hash: 8cfc7f0c
 */

#include "ACDChangeActorMessage.h"

void ACDChangeActorMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&snoActor, base, current);
  ptr += 0x1c;
}
