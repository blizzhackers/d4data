/**
 * Definition: tfeacdb4e
 * Hash: feacdb4e
 */

#include "tfeacdb4e.h"

void tfeacdb4e::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoPower, base, current);
  current = ptr + 0x4;
  readData(&unk_f276347, base, current);
  ptr += 0x8;
}
