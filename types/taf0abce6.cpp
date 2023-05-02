/**
 * Definition: taf0abce6
 * Hash: af0abce6
 */

#include "taf0abce6.h"

void taf0abce6::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwID, base, current);
  current = ptr + 0x4;
  readData(&eCurrency, base, current);
  current = ptr + 0x8;
  readData(&unk_6d39fa2, base, current);
  current = ptr + 0x10;
  readData(&arValues, base, current);
  current = ptr + 0x20;
  readData(&unk_6ae314e, base, current);
  current = ptr + 0x24;
  readData(&unk_f61d7c3, base, current);
  current = ptr + 0x28;
  readData(&unk_40ddaae, base, current);
  ptr += 0x40;
}
