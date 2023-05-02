/**
 * Definition: t3248a683
 * Hash: 3248a683
 */

#include "t3248a683.h"

void t3248a683::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eShape, base, current);
  current = ptr + 0x4;
  readData(&flDensity, base, current);
  current = ptr + 0x8;
  readData(&unk_a36833, base, current);
  current = ptr + 0xc;
  readData(&unk_e596c58, base, current);
  current = ptr + 0x10;
  readData(&unk_5050283, base, current);
  current = ptr + 0x14;
  readData(&unk_6b7a77, base, current);
  current = ptr + 0x18;
  readData(&unk_24f4837, base, current);
  current = ptr + 0x1c;
  readData(&unk_9e04ce9, base, current);
  current = ptr + 0x20;
  readData(&unk_b8a40f6, base, current);
  current = ptr + 0x24;
  readData(&unk_96578db, base, current);
  current = ptr + 0x28;
  readData(&unk_92eef97, base, current);
  current = ptr + 0x2c;
  readData(&unk_b950bb6, base, current);
  current = ptr + 0x30;
  readData(&unk_b345994, base, current);
  current = ptr + 0x34;
  readData(&unk_4d7c109, base, current);
  current = ptr + 0x38;
  readData(&unk_29ac45, base, current);
  current = ptr + 0x3c;
  readData(&unk_9ecb4e4, base, current);
  current = ptr + 0x40;
  readData(&unk_56127ed, base, current);
  current = ptr + 0x44;
  readData(&unk_69cc0f4, base, current);
  current = ptr + 0x48;
  readData(&unk_5838de5, base, current);
  current = ptr + 0x80;
  readData(&unk_3da7a7b, base, current);
  ptr += 0x88;
}
