/**
 * Definition: te3bec795
 * Hash: e3bec795
 */

#include "te3bec795.h"

void te3bec795::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_27ff629, base, current);
  current = ptr + 0x10;
  readData(&snoConversation, base, current);
  current = ptr + 0x14;
  readData(&unk_cf3ce, base, current);
  current = ptr + 0x18;
  readData(&snoSpeaker, base, current);
  current = ptr + 0x1c;
  readData(&eSpeakerGender, base, current);
  current = ptr + 0x20;
  readData(&unk_6abea6, base, current);
  ptr += 0x28;
}
