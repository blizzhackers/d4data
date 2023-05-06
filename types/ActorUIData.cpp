/**
 * Definition: ActorUIData
 * Hash: b8942531
 */

#include "ActorUIData.h"

void ActorUIData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_c5e14e0, base, current);
  current = ptr + 0x4;
  readData(&hMinimapIcon, base, current);
  current = ptr + 0x8;
  readData(&unk_f51d2b3, base, current);
  current = ptr + 0xc;
  readData(&unk_29a7d8d, base, current);
  current = ptr + 0x10;
  readData(&unk_cae4486, base, current);
  current = ptr + 0x14;
  readData(&unk_98a6ae1, base, current);
  current = ptr + 0x18;
  readData(&unk_c26b08b, base, current);
  current = ptr + 0x1c;
  readData(&unk_fab46e5, base, current);
  current = ptr + 0x20;
  readData(&unk_cf8f262, base, current);
  current = ptr + 0x24;
  readData(&unk_6aad51d, base, current);
  current = ptr + 0x28;
  readData(&unk_c6ec070, base, current);
  ptr += 0x48;
}
