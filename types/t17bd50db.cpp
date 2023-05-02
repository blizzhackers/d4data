/**
 * Definition: t17bd50db
 * Hash: 17bd50db
 */

#include "t17bd50db.h"

void t17bd50db::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_20b45d7, base, current);
  current = ptr + 0x4;
  readData(&eType, base, current);
  current = ptr + 0x8;
  readData(&flRadius, base, current);
  current = ptr + 0xc;
  readData(&flLength, base, current);
  current = ptr + 0x10;
  readData(&aPitch, base, current);
  current = ptr + 0x14;
  readData(&aYaw, base, current);
  current = ptr + 0x18;
  readData(&unk_711980c, base, current);
  ptr += 0x24;
}
