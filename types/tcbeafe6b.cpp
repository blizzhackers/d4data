/**
 * Definition: tcbeafe6b
 * Hash: cbeafe6b
 */

#include "tcbeafe6b.h"

void tcbeafe6b::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_4675a7c, base, ptr);
  readData(&unk_5f40a5f, base, ptr);
  readData(&unk_7882c15, base, ptr);
}
