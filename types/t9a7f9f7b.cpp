/**
 * Definition: t9a7f9f7b
 * Hash: 9a7f9f7b
 */

#include "t9a7f9f7b.h"

void t9a7f9f7b::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tPitch, base, current);
  current = ptr + 0xc;
  readData(&tYaw, base, current);
  current = ptr + 0x18;
  readData(&tRoll, base, current);
  current = ptr + 0x24;
  readData(&tTurret, base, current);
  current = ptr + 0x30;
  readData(&tFOV, base, current);
  current = ptr + 0x3c;
  readData(&tMovementSpeed, base, current);
  current = ptr + 0x48;
  readData(&unk_8023fd7, base, current);
  current = ptr + 0x54;
  readData(&unk_6399d3e, base, current);
  current = ptr + 0x58;
  readData(&unk_4256dac, base, current);
  current = ptr + 0x5c;
  readData(&unk_125c54c, base, current);
  current = ptr + 0x60;
  readData(&unk_3294a2, base, current);
  current = ptr + 0x64;
  readData(&unk_2f6e0dd, base, current);
  current = ptr + 0x68;
  readData(&unk_ff7e332, base, current);
  current = ptr + 0x6c;
  readData(&unk_6e6acb6, base, current);
  current = ptr + 0x70;
  readData(&unk_7122fb9, base, current);
  current = ptr + 0x74;
  readData(&unk_71789fc, base, current);
  ptr += 0x78;
}
