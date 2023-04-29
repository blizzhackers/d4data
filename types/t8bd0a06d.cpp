/**
 * Definition: t8bd0a06d
 * Hash: 8bd0a06d
 */

#include "t8bd0a06d.h"

void t8bd0a06d::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_ad293f5, base, ptr);
  readData(&unk_f05145d, base, ptr);
  readData(&snoDestination, base, ptr);
}
