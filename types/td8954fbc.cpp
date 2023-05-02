/**
 * Definition: td8954fbc
 * Hash: d8954fbc
 */

#include "td8954fbc.h"

void td8954fbc::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_f703a7e, base, current);
  current = ptr + 0x30;
  readData(&unk_dce541c, base, current);
  ptr += 0x38;
}
