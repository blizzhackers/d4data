/**
 * Definition: t14c5741
 * Hash: 14c5741
 */

#include "t14c5741.h"

void t14c5741::read(const char* base, char* &ptr) {
  readData(&szName, base, ptr);
  readData(&szToolTip, base, ptr);
  readData(&unk_479d177, base, ptr);
}
