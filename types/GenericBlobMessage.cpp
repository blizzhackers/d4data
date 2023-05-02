/**
 * Definition: GenericBlobMessage
 * Hash: a5935d21
 */

#include "GenericBlobMessage.h"

void GenericBlobMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&uBlobSize, base, current);
  ptr += 0x14;
}
