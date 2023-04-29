/**
 * Definition: PlayConvLineMessage
 * Hash: d55da4d9
 */

#include "PlayConvLineMessage.h"

void PlayConvLineMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&annSpeaker, base, ptr);
  readData(&tParams, base, ptr);
  readData(&unk_659589a, base, ptr);
}
