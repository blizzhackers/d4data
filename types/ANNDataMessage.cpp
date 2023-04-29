/**
 * Definition: ANNDataMessage
 * Hash: 819f049c
 */

#include "ANNDataMessage.h"

void ANNDataMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
}
