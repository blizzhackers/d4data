/**
 * Definition: GlobalStore
 * Hash: d1319a9e
 */

#include "GlobalStore.h"

void GlobalStore::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_2fa1bf6, base, current);
  current = ptr + 0x14;
  readData(&unk_5967152, base, current);
  current = ptr + 0x18;
  readData(&unk_2eb3017, base, current);
  current = ptr + 0x1c;
  readData(&unk_9ff4d97, base, current);
  current = ptr + 0x20;
  readData(&unk_ec0907f, base, current);
  current = ptr + 0x24;
  readData(&unk_d7f8478, base, current);
  current = ptr + 0x28;
  readData(&unk_2009ff7, base, current);
  current = ptr + 0x2c;
  readData(&unk_23cca12, base, current);
  current = ptr + 0x30;
  readData(&unk_a64749a, base, current);
  current = ptr + 0xf8;
  readData(&unk_d679087, base, current);
  current = ptr + 0x100;
  readData(&unk_357aca5, base, current);
  current = ptr + 0x110;
  readData(&unk_f86e686, base, current);
  current = ptr + 0x114;
  readData(&unk_8fc9524, base, current);
  current = ptr + 0x118;
  readData(&unk_d7df52d, base, current);
  current = ptr + 0x130;
  readData(&unk_107fe73, base, current);
  current = ptr + 0x138;
  readData(&unk_465e395, base, current);
  current = ptr + 0x5b8;
  readData(&unk_3b4b9b7, base, current);
  current = ptr + 0x5e0;
  readData(&unk_26a4b93, base, current);
  ptr += 0x680;
}
