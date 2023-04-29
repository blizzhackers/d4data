/**
 * Definition: PlasmaAttachMessage
 * Hash: 3c4ca2b8
 */

#include "PlasmaAttachMessage.h"

void PlasmaAttachMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&annPlasma, base, ptr);
  readData(&annAttachTo, base, ptr);
}
