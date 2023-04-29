/**
 * Definition: ClanLabel
 * Hash: 595601de
 */

#include "ClanLabel.h"

void ClanLabel::read(const char* base, char* &ptr) {
  readData(&szName, base, ptr);
  readData(&eLabelType, base, ptr);
  readData(&bEnabled, base, ptr);
}
