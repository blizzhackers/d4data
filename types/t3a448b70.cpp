/**
 * Definition: t3a448b70
 * Hash: 3a448b70
 */

#include "t3a448b70.h"

void t3a448b70::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoPower, base, current);
  current = ptr + 0x4;
  readData(&snoAnim, base, current);
  current = ptr + 0x8;
  readData(&unk_e94caff, base, current);
  ptr += 0xc;
}
