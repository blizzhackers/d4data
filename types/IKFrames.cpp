/**
 * Definition: IKFrames
 * Hash: 97a49412
 */

#include "IKFrames.h"

void IKFrames::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_e7b35bd, base, current);
  current = ptr + 0x8;
  readData(&arIKWindows, base, current);
  current = ptr + 0x18;
  readData(&unk_f745539, base, current);
  ptr += 0x28;
}
