/**
 * Definition: td8954fbc
 * Hash: d8954fbc
 */

#include "td8954fbc.h"

void td8954fbc::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_f703a7e, base, ptr);
  readData(&unk_dce541c, base, ptr);
}
