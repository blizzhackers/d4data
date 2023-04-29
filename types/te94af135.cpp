/**
 * Definition: te94af135
 * Hash: e94af135
 */

#include "te94af135.h"

void te94af135::read(const char* base, char* &ptr) {
  readData(&szName, base, ptr);
  readData(&hLabel, base, ptr);
  readData(&rgbaColor, base, ptr);
}
