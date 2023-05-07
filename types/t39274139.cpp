/**
 * Definition: t39274139
 * Hash: 39274139
 */

#include "t39274139.h"

void t39274139::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_f1ba2b6, base, current);
  current = ptr + 0x4;
  readData(&unk_fc9771a, base, current);
  current = ptr + 0x8;
  readData(&unk_fb5053f, base, current);
  current = ptr + 0xc;
  readData(&unk_5071fb5, base, current);
  current = ptr + 0x10;
  readData(&fHeight, base, current);
  current = ptr + 0x14;
  readData(&flHeightMin, base, current);
  current = ptr + 0x18;
  readData(&unk_b9a83c2, base, current);
  current = ptr + 0x1c;
  readData(&flHeightMax, base, current);
  current = ptr + 0x20;
  readData(&unk_99ead44, base, current);
  current = ptr + 0x24;
  readData(&fSlope, base, current);
  current = ptr + 0x28;
  readData(&unk_eaf33f9, base, current);
  current = ptr + 0x2c;
  readData(&unk_45a7b8c, base, current);
  current = ptr + 0x30;
  readData(&unk_eaf32fb, base, current);
  current = ptr + 0x34;
  readData(&unk_25ea50e, base, current);
  current = ptr + 0x38;
  readData(&fDirection, base, current);
  current = ptr + 0x3c;
  readData(&unk_fd4e16f, base, current);
  current = ptr + 0x40;
  readData(&flDirectionAzimuth, base, current);
  current = ptr + 0x44;
  readData(&unk_31d6a90, base, current);
  current = ptr + 0x48;
  readData(&unk_57c2f26, base, current);
  current = ptr + 0x4c;
  readData(&fNoise, base, current);
  current = ptr + 0x50;
  readData(&unk_9df1e22, base, current);
  current = ptr + 0x54;
  readData(&unk_da7c269, base, current);
  current = ptr + 0x58;
  readData(&unk_a8c1794, base, current);
  current = ptr + 0x5c;
  readData(&unk_a8c1696, base, current);
  current = ptr + 0x60;
  readData(&unk_a0f56db, base, current);
  current = ptr + 0x68;
  readData(&unk_19f3d77, base, current);
  current = ptr + 0x6c;
  readData(&unk_faf93c7, base, current);
  current = ptr + 0x70;
  readData(&unk_d3774da, base, current);
  current = ptr + 0x74;
  readData(&unk_faf92c9, base, current);
  current = ptr + 0x78;
  readData(&unk_b3b9e5c, base, current);
  current = ptr + 0x7c;
  readData(&fInvert, base, current);
  ptr += 0x80;
}
