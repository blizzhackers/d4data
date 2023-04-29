/**
 * Definition: t9901ddd4
 * Hash: 9901ddd4
 */

#include "t9901ddd4.h"

void t9901ddd4::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_756ebc1, base, ptr);
  readData(&unk_953936b, base, ptr);
}
