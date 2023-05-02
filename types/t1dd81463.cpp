/**
 * Definition: t1dd81463
 * Hash: 1dd81463
 */

#include "t1dd81463.h"

void t1dd81463::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_ef323d8, base, current);
  current = ptr + 0x10;
  readData(&unk_ec775f9, base, current);
  current = ptr + 0x14;
  readData(&unk_8c498b5, base, current);
  current = ptr + 0x18;
  readData(&unk_1028ede, base, current);
  current = ptr + 0x20;
  readData(&unk_ccd9967, base, current);
  current = ptr + 0x30;
  readData(&unk_a2157e8, base, current);
  current = ptr + 0x40;
  readData(&szOnController, base, current);
  current = ptr + 0x50;
  readData(&unk_587374f, base, current);
  current = ptr + 0x60;
  readData(&unk_42b05a7, base, current);
  current = ptr + 0x70;
  readData(&unk_e0c6a45, base, current);
  current = ptr + 0x74;
  readData(&unk_9a8825c, base, current);
  ptr += 0x78;
}
