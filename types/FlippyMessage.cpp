/**
 * Definition: FlippyMessage
 * Hash: 8f1bec79
 */

#include "FlippyMessage.h"

void FlippyMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&annLauncher, base, current);
  current = ptr + 0x18;
  readData(&snoFlippyParticle, base, current);
  current = ptr + 0x1c;
  readData(&snoActorLoot, base, current);
  current = ptr + 0x20;
  readData(&wpSource, base, current);
  current = ptr + 0x2c;
  readData(&wpDest, base, current);
  current = ptr + 0x38;
  readData(&unk_18f36c0, base, current);
  current = ptr + 0x3c;
  readData(&unk_c00b36a, base, current);
  ptr += 0x40;
}
