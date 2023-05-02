/**
 * Definition: tb0371ad1
 * Hash: b0371ad1
 */

#include "tb0371ad1.h"

void tb0371ad1::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tFormula, base, current);
  current = ptr + 0x20;
  readData(&unk_d55170, base, current);
  current = ptr + 0x24;
  readData(&unk_62967bd, base, current);
  current = ptr + 0x28;
  readData(&unk_9554429, base, current);
  current = ptr + 0x2c;
  readData(&unk_395cf3a, base, current);
  ptr += 0x30;
}
