/**
 * Definition: tf697fdbb
 * Hash: f697fdbb
 */

#include "tf697fdbb.h"

void tf697fdbb::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_dce541c, base, current);
  current = ptr + 0x14;
  readData(&unk_eaf087a, base, current);
  ptr += 0x18;
}
