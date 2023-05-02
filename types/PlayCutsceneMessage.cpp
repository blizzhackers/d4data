/**
 * Definition: PlayCutsceneMessage
 * Hash: 6d6923d5
 */

#include "PlayCutsceneMessage.h"

void PlayCutsceneMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&nIndex, base, current);
  ptr += 0x14;
}
