/**
 * Definition: TraceMessage
 * Hash: 587c11d4
 */

#include "TraceMessage.h"

void TraceMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_efc6d0, base, current);
  current = ptr + 0x10;
  readData(&unk_a91882c, base, current);
  current = ptr + 0x24;
  readData(&dwGameAccountId, base, current);
  current = ptr + 0x28;
  readData(&szName, base, current);
  current = ptr + 0x4c;
  readData(&unk_8601b80, base, current);
  ptr += 0x50;
}
