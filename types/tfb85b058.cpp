/**
 * Definition: tfb85b058
 * Hash: fb85b058
 */

#include "tfb85b058.h"

void tfb85b058::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_226a57b, base, current);
  ptr += 0x14;
}
