/**
 * Definition: PlasmaAttachMessage
 * Hash: 3c4ca2b8
 */

#include "PlasmaAttachMessage.h"

void PlasmaAttachMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&annPlasma, base, current);
  current = ptr + 0x18;
  readData(&annAttachTo, base, current);
  ptr += 0x20;
}
