/**
 * Definition: t75ca18d0
 * Hash: 75ca18d0
 */

#include "t75ca18d0.h"

void t75ca18d0::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&hTemplate, base, current);
  current = ptr + 0x8;
  readData(&bActive, base, current);
  current = ptr + 0xc;
  readData(&unk_f45aa9c, base, current);
  current = ptr + 0x10;
  readData(&unk_17cfa96, base, current);
  current = ptr + 0x18;
  readData(&szOnInit, base, current);
  current = ptr + 0x28;
  readData(&szOnOpen, base, current);
  current = ptr + 0x38;
  readData(&szOnClose, base, current);
  current = ptr + 0x48;
  readData(&szOnDispose, base, current);
  current = ptr + 0x58;
  readData(&szOnUpdate, base, current);
  current = ptr + 0x68;
  readData(&szOnSelChange, base, current);
  current = ptr + 0x78;
  readData(&unk_173059, base, current);
  current = ptr + 0x88;
  readData(&snoOnOpenSound, base, current);
  current = ptr + 0x8c;
  readData(&unk_33fa5cf, base, current);
  current = ptr + 0x90;
  readData(&snoOnCloseSound, base, current);
  current = ptr + 0x98;
  readData(&unk_8ab8d6, base, current);
  current = ptr + 0xa8;
  readData(&unk_2509b49, base, current);
  current = ptr + 0xb8;
  readData(&unk_a2ead70, base, current);
  current = ptr + 0xc8;
  readData(&unk_868283, base, current);
  current = ptr + 0xd8;
  readData(&unk_785d371, base, current);
  current = ptr + 0xdc;
  readData(&unk_192fb51, base, current);
  current = ptr + 0xe0;
  readData(&unk_5251749, base, current);
  current = ptr + 0xe8;
  readData(&unk_1cfa0b8, base, current);
  current = ptr + 0xf8;
  readData(&unk_1cfa0b9, base, current);
  current = ptr + 0x108;
  readData(&unk_513b522, base, current);
  current = ptr + 0x10c;
  readData(&unk_f0a3845, base, current);
  current = ptr + 0x110;
  readData(&unk_40ae369, base, current);
  current = ptr + 0x114;
  readData(&unk_7d6fa47, base, current);
  ptr += 0x118;
}
