/**
 * Definition: ParagonNodeMessage
 * Hash: d77b8113
 */

#include "ParagonNodeMessage.h"

void ParagonNodeMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&dwNodeIndex, base, current);
  current = ptr + 0x14;
  readData(&bIsCheat, base, current);
  ptr += 0x18;
}
