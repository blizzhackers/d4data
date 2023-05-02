/**
 * Definition: t5524bcce
 * Hash: 5524bcce
 */

#include "t5524bcce.h"

void t5524bcce::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoPowerFrom, base, current);
  current = ptr + 0x8;
  readData(&unk_ad10223, base, current);
  ptr += 0x18;
}
