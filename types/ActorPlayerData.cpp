/**
 * Definition: ActorPlayerData
 * Hash: 35abf7a0
 */

#include "ActorPlayerData.h"

void ActorPlayerData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eGender, base, current);
  current = ptr + 0x4;
  readData(&ePlayerClass, base, current);
  current = ptr + 0x8;
  readData(&unk_b50cfcc, base, current);
  current = ptr + 0x10;
  readData(&unk_676ce65, base, current);
  current = ptr + 0x20;
  readData(&unk_651d9cb, base, current);
  current = ptr + 0x30;
  readData(&unk_4283fe4, base, current);
  current = ptr + 0x34;
  readData(&unk_bba0b7f, base, current);
  current = ptr + 0x108;
  readData(&unk_a90a48d, base, current);
  ptr += 0x118;
}
