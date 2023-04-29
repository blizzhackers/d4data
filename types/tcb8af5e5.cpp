/**
 * Definition: tcb8af5e5
 * Hash: cb8af5e5
 */

#include "tcb8af5e5.h"

void tcb8af5e5::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&wpPlace, base, ptr);
  readData(&unk_756ebc1, base, ptr);
  readData(&unk_e4390f7, base, ptr);
  readData(&unk_40f5b6, base, ptr);
  readData(&unk_71c18eb, base, ptr);
}
