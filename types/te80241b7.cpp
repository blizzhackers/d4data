/**
 * Definition: te80241b7
 * Hash: e80241b7
 */

#include "te80241b7.h"

void te80241b7::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_6c0cb90, base, current);
  current = ptr + 0x4;
  readData(&unk_b7593d9, base, current);
  current = ptr + 0x8;
  readData(&unk_b8d46b, base, current);
  current = ptr + 0xc;
  readData(&unk_ef17f0b, base, current);
  current = ptr + 0x10;
  readData(&unk_71e61d, base, current);
  current = ptr + 0x14;
  readData(&unk_aec0875, base, current);
  current = ptr + 0x18;
  readData(&unk_24ebc07, base, current);
  current = ptr + 0x1c;
  readData(&snoHighlight, base, current);
  current = ptr + 0x20;
  readData(&unk_5f72810, base, current);
  current = ptr + 0x24;
  readData(&snoOccluded, base, current);
  current = ptr + 0x28;
  readData(&snoDepth, base, current);
  current = ptr + 0x2c;
  readData(&snoCookie, base, current);
  current = ptr + 0x30;
  readData(&unk_49badc, base, current);
  current = ptr + 0x34;
  readData(&snoUIRActor, base, current);
  current = ptr + 0x38;
  readData(&unk_d2ef4a4, base, current);
  current = ptr + 0x3c;
  readData(&unk_445df1d, base, current);
  current = ptr + 0x40;
  readData(&unk_34304af, base, current);
  current = ptr + 0x44;
  readData(&snoPowerCenters, base, current);
  ptr += 0x48;
}
