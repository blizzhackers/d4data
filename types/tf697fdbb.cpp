/**
 * Definition: tf697fdbb
 * Hash: f697fdbb
 */

#include "tf697fdbb.h"

void tf697fdbb::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_dce541c, base, ptr);
  readData(&unk_eaf087a, base, ptr);
}
