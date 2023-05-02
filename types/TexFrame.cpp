/**
 * Definition: TexFrame
 * Hash: 171befc
 */

#include "TexFrame.h"

void TexFrame::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&hImageHandle, base, current);
  current = ptr + 0x4;
  readData(&flU0, base, current);
  current = ptr + 0x8;
  readData(&flV0, base, current);
  current = ptr + 0xc;
  readData(&flU1, base, current);
  current = ptr + 0x10;
  readData(&flV1, base, current);
  current = ptr + 0x14;
  readData(&unk_8081ff3, base, current);
  current = ptr + 0x18;
  readData(&unk_8082014, base, current);
  current = ptr + 0x1c;
  readData(&unk_8081ff4, base, current);
  current = ptr + 0x20;
  readData(&unk_8082015, base, current);
  ptr += 0x24;
}
