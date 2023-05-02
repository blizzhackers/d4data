/**
 * Definition: tf49e9532
 * Hash: f49e9532
 */

#include "tf49e9532.h"

void tf49e9532::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&bEnabled, base, current);
  current = ptr + 0x4;
  readData(&unk_f14ffed, base, current);
  current = ptr + 0x10;
  readData(&unk_4899292, base, current);
  current = ptr + 0x48;
  readData(&unk_169823a, base, current);
  current = ptr + 0x80;
  readData(&unk_f052750, base, current);
  current = ptr + 0x88;
  readData(&unk_beb976c, base, current);
  current = ptr + 0xc0;
  readData(&unk_99175b8, base, current);
  current = ptr + 0xf8;
  readData(&unk_b854fe5, base, current);
  current = ptr + 0x130;
  readData(&unk_d14bc79, base, current);
  current = ptr + 0x134;
  readData(&unk_f852d87, base, current);
  current = ptr + 0x138;
  readData(&unk_86d2585, base, current);
  current = ptr + 0x13c;
  readData(&unk_331d48f, base, current);
  current = ptr + 0x144;
  readData(&unk_67b3c4a, base, current);
  current = ptr + 0x148;
  readData(&unk_1ecb588, base, current);
  current = ptr + 0x14c;
  readData(&unk_211837d, base, current);
  current = ptr + 0x158;
  readData(&unk_95e2b10, base, current);
  current = ptr + 0x190;
  readData(&unk_b9a067e, base, current);
  current = ptr + 0x1c8;
  readData(&unk_2f13301, base, current);
  current = ptr + 0x200;
  readData(&unk_caea994, base, current);
  current = ptr + 0x204;
  readData(&TileSetExit, base, current);
  current = ptr + 0x208;
  readData(&unk_924ac95, base, current);
  current = ptr + 0x240;
  readData(&unk_de5453f, base, current);
  current = ptr + 0x250;
  readData(&unk_ab0e39e, base, current);
  current = ptr + 0x288;
  readData(&unk_b75acc5, base, current);
  current = ptr + 0x28c;
  readData(&unk_fd448cd, base, current);
  current = ptr + 0x290;
  readData(&unk_35d43ee, base, current);
  current = ptr + 0x294;
  readData(&unk_6b9f105, base, current);
  current = ptr + 0x298;
  readData(&unk_ddba751, base, current);
  current = ptr + 0x2a4;
  readData(&unk_48b7873, base, current);
  current = ptr + 0x2a8;
  readData(&unk_b74898b, base, current);
  current = ptr + 0x2ac;
  readData(&unk_3ce7419, base, current);
  ptr += 0x2b0;
}
