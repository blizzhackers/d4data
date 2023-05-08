/**
 * Definition: SharedChildFile
 * Hash: 2070413b
 */

#include "SharedChildFile.h"

void SharedChildFile::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szMD5, base, current);
  ptr += 0x32;
}
