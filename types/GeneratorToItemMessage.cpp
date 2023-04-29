/**
 * Definition: GeneratorToItemMessage
 * Hash: 71465cbe
 */

#include "GeneratorToItemMessage.h"

void GeneratorToItemMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_fd3ecde, base, ptr);
}
