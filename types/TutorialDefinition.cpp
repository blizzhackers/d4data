/**
 * Definition: TutorialDefinition
 * Hash: 15d6711d
 */

#include "TutorialDefinition.h"

void TutorialDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwNextID, base, current);
  current = ptr + 0xc;
  readData(&eType, base, current);
  current = ptr + 0x10;
  readData(&dwFlags, base, current);
  current = ptr + 0x18;
  readData(&unk_5da8477, base, current);
  current = ptr + 0x28;
  readData(&unk_cc2b674, base, current);
  current = ptr + 0x2c;
  readData(&unk_e34e19d, base, current);
  current = ptr + 0x30;
  readData(&eAlignHorizontal, base, current);
  current = ptr + 0x34;
  readData(&eAlignVertical, base, current);
  current = ptr + 0x38;
  readData(&vecOffset, base, current);
  current = ptr + 0x40;
  readData(&unk_442c269, base, current);
  ptr += 0x50;
}
