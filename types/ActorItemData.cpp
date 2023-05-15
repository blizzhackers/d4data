/**
 * Definition: ActorItemData
 * Hash: 56dd8f42
 */

#include "ActorItemData.h"

void ActorItemData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_f49eb6, base, current);
  current = ptr + 0x4;
  readData(&unk_51366dc, base, current);
  current = ptr + 0x8;
  readData(&unk_21b35c, base, current);
  current = ptr + 0xc;
  readData(&unk_9637832, base, current);
  current = ptr + 0x10;
  readData(&unk_a2b2765, base, current);
  current = ptr + 0x14;
  readData(&unk_9aa038d, base, current);
  current = ptr + 0x18;
  readData(&unk_dd4368a, base, current);
  current = ptr + 0x1c;
  readData(&unk_7a3f372, base, current);
  current = ptr + 0x20;
  readData(&unk_edffb30, base, current);
  current = ptr + 0x34;
  readData(&unk_472eb5b, base, current);
  current = ptr + 0x38;
  readData(&unk_4085e76, base, current);
  current = ptr + 0x3c;
  readData(&unk_786edfc, base, current);
  current = ptr + 0x40;
  readData(&unk_30df7fb, base, current);
  current = ptr + 0x44;
  readData(&unk_a847cba, base, current);
  current = ptr + 0x48;
  readData(&unk_13d073c, base, current);
  current = ptr + 0x4c;
  readData(&unk_8fb3d30, base, current);
  current = ptr + 0x50;
  readData(&unk_842ce3a, base, current);
  current = ptr + 0x54;
  readData(&unk_d30b4fa, base, current);
  current = ptr + 0x58;
  readData(&unk_62f6313, base, current);
  current = ptr + 0x5c;
  readData(&unk_4af44d6, base, current);
  current = ptr + 0x60;
  readData(&unk_21f1674, base, current);
  current = ptr + 0x68;
  readData(&unk_28e7959, base, current);
  current = ptr + 0x6c;
  readData(&unk_1427368, base, current);
  current = ptr + 0x70;
  readData(&unk_62c39fe, base, current);
  current = ptr + 0x7c;
  readData(&unk_98050e1, base, current);
  current = ptr + 0x80;
  readData(&unk_17c40c2, base, current);
  current = ptr + 0xbc;
  readData(&unk_48186c7, base, current);
  current = ptr + 0xc0;
  readData(&hDefaultImage, base, current);
  current = ptr + 0xc4;
  readData(&hSocketedImage, base, current);
  current = ptr + 0xc8;
  readData(&unk_2fec8f9, base, current);
  current = ptr + 0xcc;
  readData(&unk_954d4f9, base, current);
  current = ptr + 0xd0;
  readData(&fBottomless, base, current);
  current = ptr + 0xd4;
  readData(&eItemUseType, base, current);
  current = ptr + 0xd8;
  readData(&unk_db54dcf, base, current);
  current = ptr + 0xdc;
  readData(&unk_4bfa38e, base, current);
  current = ptr + 0xe0;
  readData(&tHardpointOffsets, base, current);
  current = ptr + 0x180;
  readData(&unk_c0b773, base, current);
  current = ptr + 0x220;
  readData(&unk_def7f43, base, current);
  current = ptr + 0x230;
  readData(&tWeaponData, base, current);
  current = ptr + 0x240;
  readData(&unk_3b0050f, base, current);
  current = ptr + 0x294;
  readData(&unk_e133e62, base, current);
  ptr += 0x298;
}
