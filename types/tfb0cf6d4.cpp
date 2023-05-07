/**
 * Definition: tfb0cf6d4
 * Hash: fb0cf6d4
 */

#include "tfb0cf6d4.h"

void tfb0cf6d4::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&fDisableNonFriendlyOperation, base, current);
  current = ptr + 0x14;
  readData(&fWalkToCenter, base, current);
  current = ptr + 0x18;
  readData(&unk_2387505, base, current);
  current = ptr + 0x1c;
  readData(&fUseStringListName, base, current);
  current = ptr + 0x20;
  readData(&unk_444cd69, base, current);
  current = ptr + 0x24;
  readData(&flOperationRadius, base, current);
  current = ptr + 0x28;
  readData(&unk_d0b1df5, base, current);
  current = ptr + 0x2c;
  readData(&unk_76fbf14, base, current);
  current = ptr + 0x30;
  readData(&unk_83183d4, base, current);
  current = ptr + 0x34;
  readData(&unk_2767229, base, current);
  current = ptr + 0x38;
  readData(&unk_f184557, base, current);
  current = ptr + 0x3c;
  readData(&unk_6d9ebe1, base, current);
  current = ptr + 0x40;
  readData(&unk_5456245, base, current);
  current = ptr + 0x44;
  readData(&unk_af5815a, base, current);
  current = ptr + 0x48;
  readData(&unk_18353a0, base, current);
  current = ptr + 0x4c;
  readData(&unk_11a3492, base, current);
  current = ptr + 0x50;
  readData(&unk_3e0941e, base, current);
  current = ptr + 0x54;
  readData(&tConditionData, base, current);
  current = ptr + 0x58;
  readData(&unk_bfad8a9, base, current);
  current = ptr + 0x5c;
  readData(&unk_1552d4d, base, current);
  current = ptr + 0x60;
  readData(&unk_2cf2865, base, current);
  current = ptr + 0x64;
  readData(&unk_fe76809, base, current);
  current = ptr + 0x68;
  readData(&unk_359810e, base, current);
  current = ptr + 0x6c;
  readData(&nCooldown, base, current);
  current = ptr + 0x70;
  readData(&unk_d45ed2d, base, current);
  current = ptr + 0x74;
  readData(&unk_f6b20b7, base, current);
  current = ptr + 0x78;
  readData(&unk_54513b8, base, current);
  current = ptr + 0x7c;
  readData(&unk_fd1f378, base, current);
  current = ptr + 0x80;
  readData(&unk_487c14, base, current);
  current = ptr + 0x84;
  readData(&unk_87f2609, base, current);
  current = ptr + 0x88;
  readData(&unk_158eb4f, base, current);
  current = ptr + 0x8c;
  readData(&unk_ab58cd3, base, current);
  current = ptr + 0x90;
  readData(&unk_91a3966, base, current);
  current = ptr + 0x94;
  readData(&unk_25312e5, base, current);
  current = ptr + 0x98;
  readData(&unk_4be4371, base, current);
  current = ptr + 0x9c;
  readData(&dwPad, base, current);
  current = ptr + 0xa0;
  readData(&tTriggerData, base, current);
  ptr += 0xf0;
}
