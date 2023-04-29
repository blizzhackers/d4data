/**
 * Definition: DataIDDataMessage
 * Hash: 11aa8166
 */

#include "DataIDDataMessage.h"

void DataIDDataMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&id, base, ptr);
}
