/**
 * Definition: t803e808c
 * Hash: 803e808c
 */

#include "t803e808c.h"

void t803e808c::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_9104406, base, ptr);
  readData(&unk_6ef22d, base, ptr);
  readData(&unk_b8ec161, base, ptr);
  readData(&snoWorld, base, ptr);
}
