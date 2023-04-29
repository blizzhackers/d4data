/**
 * Definition: EndOfTickMessage
 * Hash: e909bb9c
 */

#include "EndOfTickMessage.h"

void EndOfTickMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&dwTickEnding, base, ptr);
  readData(&dwTickNext, base, ptr);
}
