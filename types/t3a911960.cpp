/**
 * Definition: t3a911960
 * Hash: 3a911960
 */

#include "t3a911960.h"

void t3a911960::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_c888ba2, base, current);
  current = ptr + 0x8;
  readData(&unk_c7a1a19, base, current);
  current = ptr + 0x10;
  readData(&unk_1655a99, base, current);
  current = ptr + 0x18;
  readData(&unk_beb2dc0, base, current);
  current = ptr + 0x20;
  readData(&unk_55f9a53, base, current);
  current = ptr + 0x28;
  readData(&unk_9164a48, base, current);
  current = ptr + 0x30;
  readData(&levels, base, current);
  current = ptr + 0x38;
  readData(&unk_acb7bbe, base, current);
  current = ptr + 0x40;
  readData(&unk_7cb2889, base, current);
  current = ptr + 0x48;
  readData(&unk_10ff14c, base, current);
  current = ptr + 0x50;
  readData(&unk_bb3ab10, base, current);
  current = ptr + 0x58;
  readData(&weights, base, current);
  current = ptr + 0x60;
  readData(&unk_999e338, base, current);
  current = ptr + 0x68;
  readData(&unk_bd72f29, base, current);
  current = ptr + 0x70;
  readData(&triangles, base, current);
  current = ptr + 0x78;
  readData(&unk_64b9c64, base, current);
  current = ptr + 0x80;
  readData(&unk_8f009fa, base, current);
  current = ptr + 0x88;
  readData(&unk_d55a167, base, current);
  current = ptr + 0x90;
  readData(&unk_e5fff43, base, current);
  current = ptr + 0x98;
  readData(&unk_4816b6f, base, current);
  current = ptr + 0xa0;
  readData(&unk_b6736eb, base, current);
  current = ptr + 0xa8;
  readData(&unk_7a84b88, base, current);
  current = ptr + 0xb0;
  readData(&unk_ffe06ee, base, current);
  current = ptr + 0xb8;
  readData(&unk_474bf2f, base, current);
  current = ptr + 0xc0;
  readData(&unk_4ea6992, base, current);
  current = ptr + 0xc8;
  readData(&unk_4fdc600, base, current);
  current = ptr + 0xd0;
  readData(&unk_334188a, base, current);
  current = ptr + 0xd8;
  readData(&name, base, current);
  current = ptr + 0xf8;
  readData(&density, base, current);
  current = ptr + 0xfc;
  readData(&vertexCount, base, current);
  current = ptr + 0xfe;
  readData(&unk_95c242c, base, current);
  current = ptr + 0x100;
  readData(&kinematicCount, base, current);
  current = ptr + 0x102;
  readData(&triangleCount, base, current);
  current = ptr + 0x104;
  readData(&unk_1f1d125, base, current);
  current = ptr + 0x106;
  readData(&unk_588faa1, base, current);
  current = ptr + 0x108;
  readData(&unk_f4d15be, base, current);
  current = ptr + 0x10a;
  readData(&unk_93e1424, base, current);
  current = ptr + 0x10c;
  readData(&constraintCount, base, current);
  current = ptr + 0x10e;
  readData(&unk_9460e91, base, current);
  current = ptr + 0x110;
  readData(&maxLevel, base, current);
  current = ptr + 0x112;
  readData(&unk_c48fa8d, base, current);
  current = ptr + 0x114;
  readData(&unk_fef3f35, base, current);
  current = ptr + 0x116;
  readData(&unk_30047f6, base, current);
  current = ptr + 0x118;
  readData(&planeCount, base, current);
  ptr += 0x120;
}
