/**
 * Definition: GeneratorToItemMessage
 * Hash: 71465cbe
 */

#include "GeneratorToItemMessage.h"

void GeneratorToItemMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x14;
  readData(&unk_fd3ecde, base, current);
  ptr += 0x414;
}
