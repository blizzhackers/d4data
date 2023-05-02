/**
 * Definition: t9794644b
 * Hash: 9794644b
 */

#include "t9794644b.h"

void t9794644b::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_b1f0f4e, base, current);
  current = ptr + 0x20;
  readData(&unk_c31445d, base, current);
  current = ptr + 0x24;
  readData(&unk_6661ef2, base, current);
  current = ptr + 0x28;
  readData(&unk_f8c5768, base, current);
  current = ptr + 0x2c;
  readData(&flSpeedMultiplier, base, current);
  current = ptr + 0x30;
  readData(&unk_995412, base, current);
  current = ptr + 0x34;
  readData(&unk_81f023c, base, current);
  current = ptr + 0x38;
  readData(&unk_9bc1705, base, current);
  current = ptr + 0x3c;
  readData(&unk_9d8eaf7, base, current);
  current = ptr + 0x40;
  readData(&unk_7723a92, base, current);
  current = ptr + 0x44;
  readData(&unk_b804e2d, base, current);
  current = ptr + 0x48;
  readData(&unk_9369802, base, current);
  current = ptr + 0x4c;
  readData(&unk_9a7df3e, base, current);
  current = ptr + 0x50;
  readData(&unk_9ab5680, base, current);
  current = ptr + 0x58;
  readData(&unk_f05bba, base, current);
  ptr += 0x78;
}
