/**
 * Definition: tbc07d3c7
 * Hash: bc07d3c7
 */

#include "tbc07d3c7.h"

void tbc07d3c7::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&arPieces, base, current);
  current = ptr + 0x10;
  readData(&unk_85db88e, base, current);
  current = ptr + 0x20;
  readData(&unk_767477, base, current);
  current = ptr + 0x30;
  readData(&unk_755f012, base, current);
  current = ptr + 0x38;
  readData(&unk_f2499b0, base, current);
  ptr += 0x40;
}
