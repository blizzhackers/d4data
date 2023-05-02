/**
 * Definition: ClanLabel
 * Hash: 595601de
 */

#include "ClanLabel.h"

void ClanLabel::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szName, base, current);
  current = ptr + 0x4;
  readData(&eLabelType, base, current);
  current = ptr + 0x8;
  readData(&bEnabled, base, current);
  ptr += 0xc;
}
