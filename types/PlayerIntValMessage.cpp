/**
 * Definition: PlayerIntValMessage
 * Hash: 4b723c80
 */

#include "PlayerIntValMessage.h"

void PlayerIntValMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_dce541c, base, ptr);
  readData(&nVal, base, ptr);
}
