/**
 * Definition: PlayConvLineMessage
 * Hash: d55da4d9
 */

#include "PlayConvLineMessage.h"

void PlayConvLineMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&annSpeaker, base, current);
  current = ptr + 0x18;
  readData(&tParams, base, current);
  current = ptr + 0x70;
  readData(&unk_659589a, base, current);
  ptr += 0x74;
}
