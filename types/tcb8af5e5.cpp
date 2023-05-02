/**
 * Definition: tcb8af5e5
 * Hash: cb8af5e5
 */

#include "tcb8af5e5.h"

void tcb8af5e5::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&wpPlace, base, current);
  current = ptr + 0x24;
  readData(&unk_756ebc1, base, current);
  current = ptr + 0x28;
  readData(&unk_e4390f7, base, current);
  current = ptr + 0x2c;
  readData(&unk_40f5b6, base, current);
  current = ptr + 0x30;
  readData(&unk_71c18eb, base, current);
  ptr += 0x34;
}
