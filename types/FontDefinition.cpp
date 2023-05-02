/**
 * Definition: FontDefinition
 * Hash: d962ec80
 */

#include "FontDefinition.h"

void FontDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&eHintingMode, base, current);
  current = ptr + 0xc;
  readData(&eHintingStyle, base, current);
  current = ptr + 0x10;
  readData(&unk_da11db, base, current);
  current = ptr + 0x1c;
  readData(&unk_316a8bf, base, current);
  current = ptr + 0x20;
  readData(&flAdvanceScalar, base, current);
  current = ptr + 0x24;
  readData(&unk_994b88a, base, current);
  current = ptr + 0x28;
  readData(&unk_d5350c2, base, current);
  current = ptr + 0x2c;
  readData(&unk_d0cc8d7, base, current);
  current = ptr + 0x30;
  readData(&unk_7def5b8, base, current);
  current = ptr + 0x34;
  readData(&unk_7310d17, base, current);
  current = ptr + 0x38;
  readData(&unk_428af64, base, current);
  current = ptr + 0x3c;
  readData(&unk_9771bb, base, current);
  current = ptr + 0x40;
  readData(&unk_4ca851, base, current);
  current = ptr + 0x44;
  readData(&unk_820c304, base, current);
  current = ptr + 0x48;
  readData(&unk_b5b5e50, base, current);
  current = ptr + 0x50;
  readData(&ptPostData, base, current);
  current = ptr + 0x58;
  readData(&unk_2cd1580, base, current);
  ptr += 0x68;
}
