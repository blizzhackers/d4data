/**
 * Definition: RevealWorldMessage
 * Hash: fa3a85cc
 */

#include "RevealWorldMessage.h"

void RevealWorldMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&idSWorld, base, ptr);
  readData(&snoWorld, base, ptr);
  readData(&unk_2573139, base, ptr);
  readData(&unk_b4055da, base, ptr);
  readData(&unk_845cf0b, base, ptr);
  readData(&unk_66929d7, base, ptr);
  readData(&unk_fc9049b, base, ptr);
  readData(&unk_9a2a829, base, ptr);
  readData(&unk_6966598, base, ptr);
  readData(&unk_b020582, base, ptr);
}
