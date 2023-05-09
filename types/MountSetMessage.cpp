/**
 * Definition: MountSetMessage
 * Hash: f7f1bb64
 */

#include "MountSetMessage.h"

void MountSetMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_70bf7e7, base, current);
  current = ptr + 0x14;
  readData(&unk_ebf7690, base, current);
  ptr += 0x1c;
}
