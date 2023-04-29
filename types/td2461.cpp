/**
 * Definition: td2461
 * Hash: d2461
 */

#include "td2461.h"

void td2461::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_25d9f91, base, ptr);
  readData(&unk_2498be, base, ptr);
}
