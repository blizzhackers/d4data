/**
 * Definition: t36837ce3
 * Hash: 36837ce3
 */

#include "t36837ce3.h"

void t36837ce3::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tDefault, base, current);
  current = ptr + 0x10;
  readData(&tHover, base, current);
  current = ptr + 0x20;
  readData(&tTracked, base, current);
  current = ptr + 0x30;
  readData(&unk_918ddb6, base, current);
  current = ptr + 0x40;
  readData(&unk_e253b58, base, current);
  current = ptr + 0x44;
  readData(&unk_c58ef7e, base, current);
  current = ptr + 0x48;
  readData(&snoPattern, base, current);
  current = ptr + 0x4c;
  readData(&unk_a6fc3e4, base, current);
  current = ptr + 0x50;
  readData(&unk_45e317c, base, current);
  ptr += 0x54;
}
