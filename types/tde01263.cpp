/**
 * Definition: tde01263
 * Hash: de01263
 */

#include "tde01263.h"

void tde01263::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_aa3fdee, base, current);
  current = ptr + 0x4;
  readData(&unk_d6e35f3, base, current);
  current = ptr + 0x8;
  readData(&unk_cb067ec, base, current);
  ptr += 0xc;
}
