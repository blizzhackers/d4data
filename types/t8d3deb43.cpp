/**
 * Definition: t8d3deb43
 * Hash: 8d3deb43
 */

#include "t8d3deb43.h"

void t8d3deb43::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&ptProxData, base, current);
  current = ptr + 0x18;
  readData(&unk_d871dde, base, current);
  current = ptr + 0x20;
  readData(&unk_171ebfe, base, current);
  current = ptr + 0x24;
  readData(&unk_4f3b7a2, base, current);
  current = ptr + 0x28;
  readData(&unk_7be6e35, base, current);
  current = ptr + 0x2c;
  readData(&unk_3c08644, base, current);
  current = ptr + 0x30;
  readData(&unk_4a90632, base, current);
  current = ptr + 0x34;
  readData(&unk_832bee9, base, current);
  current = ptr + 0x38;
  readData(&snoQuest, base, current);
  current = ptr + 0x3c;
  readData(&snoConversation, base, current);
  ptr += 0x40;
}
