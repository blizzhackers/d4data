/**
 * Definition: t7146a43a
 * Hash: 7146a43a
 */

#include "t7146a43a.h"

void t7146a43a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_601d5c7, base, current);
  current = ptr + 0x14;
  readData(&uCommandFrame, base, current);
  ptr += 0x18;
}
