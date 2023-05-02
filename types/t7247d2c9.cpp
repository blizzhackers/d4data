/**
 * Definition: t7247d2c9
 * Hash: 7247d2c9
 */

#include "t7247d2c9.h"

void t7247d2c9::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_d5f2612, base, current);
  current = ptr + 0x10;
  readData(&unk_37aa815, base, current);
  current = ptr + 0x1c;
  readData(&unk_93e8f53, base, current);
  current = ptr + 0x24;
  readData(&unk_919c515, base, current);
  current = ptr + 0x28;
  readData(&flNoSpawnChance, base, current);
  ptr += 0x30;
}
