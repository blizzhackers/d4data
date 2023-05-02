/**
 * Definition: t84cde9fd
 * Hash: 84cde9fd
 */

#include "t84cde9fd.h"

void t84cde9fd::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_d70e05d, base, current);
  current = ptr + 0x4;
  readData(&unk_9091fe1, base, current);
  current = ptr + 0x8;
  readData(&unk_fc9a871, base, current);
  current = ptr + 0xc;
  readData(&unk_9c45777, base, current);
  ptr += 0x10;
}
