/**
 * Definition: RequestBuffCancelMessage
 * Hash: d32669b7
 */

#include "RequestBuffCancelMessage.h"

void RequestBuffCancelMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoPower, base, ptr);
  readData(&unk_86c2785, base, ptr);
}
