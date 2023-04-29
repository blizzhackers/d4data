/**
 * Definition: tf7c3172d
 * Hash: f7c3172d
 */

#include "tf7c3172d.h"

void tf7c3172d::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
}
