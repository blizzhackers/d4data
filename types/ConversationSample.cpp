/**
 * Definition: ConversationSample
 * Hash: a4be0cdd
 */

#include "ConversationSample.h"

void ConversationSample::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szLabel, base, current);
  current = ptr + 0x4;
  readData(&snoSpeaker, base, current);
  current = ptr + 0x8;
  readData(&flDuration, base, current);
  current = ptr + 0xc;
  readData(&unk_aae9d18, base, current);
  current = ptr + 0x10;
  readData(&unk_1d3e4c1, base, current);
  ptr += 0x20;
}
