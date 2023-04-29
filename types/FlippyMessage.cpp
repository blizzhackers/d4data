/**
 * Definition: FlippyMessage
 * Hash: 8f1bec79
 */

#include "FlippyMessage.h"

void FlippyMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&annLauncher, base, ptr);
  readData(&snoFlippyParticle, base, ptr);
  readData(&snoActorLoot, base, ptr);
  readData(&wpSource, base, ptr);
  readData(&wpDest, base, ptr);
  readData(&unk_18f36c0, base, ptr);
  readData(&unk_c00b36a, base, ptr);
}
