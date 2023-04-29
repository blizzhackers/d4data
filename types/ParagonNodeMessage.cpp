/**
 * Definition: ParagonNodeMessage
 * Hash: d77b8113
 */

#include "ParagonNodeMessage.h"

void ParagonNodeMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&dwNodeIndex, base, ptr);
  readData(&unk_5c73d43, base, ptr);
}
