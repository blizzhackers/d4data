/**
 * Definition: StopConvLineMessage
 * Hash: f2a9efc9
 */

#include "StopConvLineMessage.h"

void StopConvLineMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&nConvLineGUID, base, current);
  current = ptr + 0x14;
  readData(&fStoppedByUser, base, current);
  ptr += 0x18;
}
