/**
 * Definition: tf7f1bb64
 * Hash: f7f1bb64
 */

#include "tf7f1bb64.h"

void tf7f1bb64::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_70bf7e7, base, ptr);
  readData(&unk_ebf7690, base, ptr);
}
