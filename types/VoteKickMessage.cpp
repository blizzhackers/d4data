/**
 * Definition: VoteKickMessage
 * Hash: 734d58c5
 */

#include "VoteKickMessage.h"

void VoteKickMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_390da21, base, current);
  current = ptr + 0x14;
  readData(&unk_1d54bcc, base, current);
  current = ptr + 0x18;
  readData(&usMessage, base, current);
  ptr += 0x418;
}
