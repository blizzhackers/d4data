/**
 * Definition: ACDInventoryUpdateActorSNO
 * Hash: 14e05422
 */

#include "ACDInventoryUpdateActorSNO.h"

void ACDInventoryUpdateActorSNO::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&snoActor, base, ptr);
}
