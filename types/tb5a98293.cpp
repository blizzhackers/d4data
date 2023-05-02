/**
 * Definition: tb5a98293
 * Hash: b5a98293
 */

#include "tb5a98293.h"

void tb5a98293::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_61aa893, base, current);
  current = ptr + 0x8;
  readData(&snoScript, base, current);
  current = ptr + 0x18;
  readData(&unk_ebb20cd, base, current);
  current = ptr + 0x1c;
  readData(&unk_cb8d889, base, current);
  current = ptr + 0x20;
  readData(&unk_6bf9013, base, current);
  current = ptr + 0x24;
  readData(&unk_6bc1c5f, base, current);
  current = ptr + 0x28;
  readData(&unk_cdb454b, base, current);
  current = ptr + 0x30;
  readData(&arActorGroups, base, current);
  current = ptr + 0x40;
  readData(&unk_b5b0f9a, base, current);
  current = ptr + 0x50;
  readData(&unk_a5973cc, base, current);
  current = ptr + 0x54;
  readData(&unk_ba8fd29, base, current);
  current = ptr + 0x58;
  readData(&unk_a88b003, base, current);
  ptr += 0x60;
}
