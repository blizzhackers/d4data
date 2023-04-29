/**
 * Definition: tc746470f
 * Hash: c746470f
 */

#include "tc746470f.h"

void tc746470f::read(const char* base, char* &ptr) {
  readData(&szBoneName, base, ptr);
  readData(&unk_dc25f93, base, ptr);
  readData(&unk_a5eb35, base, ptr);
  readData(&unk_36bc3de, base, ptr);
  readData(&flDuration, base, ptr);
}
