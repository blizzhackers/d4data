/**
 * Definition: RequestBuffCancelMessage
 * Hash: d32669b7
 */

#include "RequestBuffCancelMessage.h"

void RequestBuffCancelMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoPower, base, current);
  current = ptr + 0x14;
  readData(&unk_86c2785, base, current);
  ptr += 0x18;
}
