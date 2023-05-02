/**
 * Definition: t18ca0295
 * Hash: 18ca0295
 */

#include "t18ca0295.h"

void t18ca0295::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&bReverseOrder, base, current);
  current = ptr + 0x4;
  readData(&bHorizontal, base, current);
  current = ptr + 0x8;
  readData(&unk_f89660f, base, current);
  current = ptr + 0xc;
  readData(&unk_3385ab6, base, current);
  current = ptr + 0x10;
  readData(&unk_3a57c53, base, current);
  current = ptr + 0x14;
  readData(&nStackSpacing, base, current);
  current = ptr + 0x18;
  readData(&unk_e1c6bf3, base, current);
  current = ptr + 0x1c;
  readData(&tMargins, base, current);
  ptr += 0x2c;
}
