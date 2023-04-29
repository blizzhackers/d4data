/**
 * Definition: t7146a43a
 * Hash: 7146a43a
 */

#include "t7146a43a.h"

void t7146a43a::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_601d5c7, base, ptr);
  readData(&unk_1bdcc9f, base, ptr);
}
