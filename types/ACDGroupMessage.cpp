/**
 * Definition: ACDGroupMessage
 * Hash: 7878d4da
 */

#include "ACDGroupMessage.h"

void ACDGroupMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&unk_8bd11e1, base, ptr);
}
