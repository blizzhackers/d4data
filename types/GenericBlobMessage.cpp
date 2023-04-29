/**
 * Definition: GenericBlobMessage
 * Hash: a5935d21
 */

#include "GenericBlobMessage.h"

void GenericBlobMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&uBlobSize, base, ptr);
}
