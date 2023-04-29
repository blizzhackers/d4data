/**
 * Definition: StopConvLineMessage
 * Hash: f2a9efc9
 */

#include "StopConvLineMessage.h"

void StopConvLineMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&nConvLineGUID, base, ptr);
  readData(&fStoppedByUser, base, ptr);
}
