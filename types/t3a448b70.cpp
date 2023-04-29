/**
 * Definition: t3a448b70
 * Hash: 3a448b70
 */

#include "t3a448b70.h"

void t3a448b70::read(const char* base, char* &ptr) {
  readData(&snoPower, base, ptr);
  readData(&snoAnim, base, ptr);
  readData(&unk_e94caff, base, ptr);
}
