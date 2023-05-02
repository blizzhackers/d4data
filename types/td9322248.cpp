/**
 * Definition: td9322248
 * Hash: d9322248
 */

#include "td9322248.h"

void td9322248::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_b64479, base, current);
  current = ptr + 0x8;
  readData(&unk_6bc7c8e, base, current);
  current = ptr + 0x18;
  readData(&unk_538a709, base, current);
  current = ptr + 0x28;
  readData(&unk_e88a211, base, current);
  current = ptr + 0x2c;
  readData(&unk_18016cb, base, current);
  current = ptr + 0x30;
  readData(&unk_cac6d29, base, current);
  current = ptr + 0x34;
  readData(&unk_aeeea38, base, current);
  current = ptr + 0x38;
  readData(&unk_670b4a9, base, current);
  current = ptr + 0x3c;
  readData(&unk_3368b, base, current);
  current = ptr + 0x40;
  readData(&unk_b13dca7, base, current);
  ptr += 0x50;
}
