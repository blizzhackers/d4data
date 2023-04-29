/**
 * Definition: ACDChangeActorMessage
 * Hash: 8cfc7f0c
 */

#include "ACDChangeActorMessage.h"

void ACDChangeActorMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&snoActor, base, ptr);
}
