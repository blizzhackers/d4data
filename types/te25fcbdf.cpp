/**
 * Definition: te25fcbdf
 * Hash: e25fcbdf
 */

#include "te25fcbdf.h"

void te25fcbdf::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_e246d5a, base, current);
  current = ptr + 0x10;
  readData(&unk_3cb63f6, base, current);
  current = ptr + 0x78;
  readData(&unk_7b78b21, base, current);
  current = ptr + 0x88;
  readData(&unk_3bd1636, base, current);
  ptr += 0x98;
}
