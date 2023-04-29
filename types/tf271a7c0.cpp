/**
 * Definition: tf271a7c0
 * Hash: f271a7c0
 */

#include "tf271a7c0.h"

void tf271a7c0::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_7cb44e7, base, ptr);
  readData(&unk_b0a3524, base, ptr);
}
