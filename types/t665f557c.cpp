/**
 * Definition: t665f557c
 * Hash: 665f557c
 */

#include "t665f557c.h"

void t665f557c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_2b67d31, base, current);
  current = ptr + 0x4;
  readData(&unk_caac0a7, base, current);
  current = ptr + 0x10;
  readData(&unk_f958de0, base, current);
  current = ptr + 0x1c;
  readData(&aOriginalYaw, base, current);
  current = ptr + 0x20;
  readData(&unk_36073a3, base, current);
  current = ptr + 0x24;
  readData(&unk_26f7052, base, current);
  current = ptr + 0x28;
  readData(&unk_26f7053, base, current);
  current = ptr + 0x2c;
  readData(&unk_26f7054, base, current);
  current = ptr + 0x30;
  readData(&unk_26f7055, base, current);
  current = ptr + 0x34;
  readData(&unk_26f7056, base, current);
  ptr += 0x38;
}
