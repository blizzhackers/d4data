/**
 * Definition: PlayCutsceneMessage
 * Hash: 6d6923d5
 */

#include "PlayCutsceneMessage.h"

void PlayCutsceneMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&nIndex, base, ptr);
}
