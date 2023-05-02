/**
 * Definition: ACDGroupMessage
 * Hash: 7878d4da
 */

#include "ACDGroupMessage.h"

void ACDGroupMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&unk_8bd11e1, base, current);
  ptr += 0x3c;
}
