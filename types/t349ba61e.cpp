/**
 * Definition: t349ba61e
 * Hash: 349ba61e
 */

#include "t349ba61e.h"

void t349ba61e::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_dce541c, base, ptr);
  readData(&unk_b88123b, base, ptr);
  readData(&unk_f1dc826, base, ptr);
}
