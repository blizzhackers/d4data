/**
 * Definition: t3ee2b992
 * Hash: 3ee2b992
 */

#include "t3ee2b992.h"

void t3ee2b992::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoParticle, base, current);
  current = ptr + 0x4;
  readData(&unk_9644926, base, current);
  ptr += 0x8;
}
