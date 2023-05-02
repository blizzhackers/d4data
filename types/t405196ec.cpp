/**
 * Definition: t405196ec
 * Hash: 405196ec
 */

#include "t405196ec.h"

void t405196ec::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tTexture, base, current);
  ptr += 0x8;
}
