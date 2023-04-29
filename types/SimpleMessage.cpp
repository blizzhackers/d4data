/**
 * Definition: SimpleMessage
 * Hash: d271bf4f
 */

#include "SimpleMessage.h"

void SimpleMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
}
