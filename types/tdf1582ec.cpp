/**
 * Definition: tdf1582ec
 * Hash: df1582ec
 */

#include "tdf1582ec.h"

void tdf1582ec::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_872c408, base, current);
  current = ptr + 0x4;
  readData(&unk_fec1a8e, base, current);
  current = ptr + 0x8;
  readData(&nUnlockLevel, base, current);
  current = ptr + 0xc;
  readData(&unk_f508498, base, current);
  ptr += 0x10;
}
