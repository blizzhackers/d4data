/**
 * Definition: t177c6184
 * Hash: 177c6184
 */

#include "t177c6184.h"

void t177c6184::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&annPlayer, base, ptr);
  readData(&unk_76098e5, base, ptr);
  readData(&unk_fa1aeb2, base, ptr);
}
