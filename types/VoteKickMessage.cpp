/**
 * Definition: VoteKickMessage
 * Hash: 734d58c5
 */

#include "VoteKickMessage.h"

void VoteKickMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_390da21, base, ptr);
  readData(&unk_1d54bcc, base, ptr);
  readData(&vRMessage, base, ptr);
}
