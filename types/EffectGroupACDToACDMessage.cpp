/**
 * Definition: EffectGroupACDToACDMessage
 * Hash: 26817e12
 */

#include "EffectGroupACDToACDMessage.h"

void EffectGroupACDToACDMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoEffectGroup, base, current);
  current = ptr + 0x14;
  readData(&annFrom, base, current);
  current = ptr + 0x1c;
  readData(&annTo, base, current);
  current = ptr + 0x24;
  readData(&unk_b883005, base, current);
  current = ptr + 0x2c;
  readData(&unk_3f8ef50, base, current);
  current = ptr + 0x34;
  readData(&unk_50e9159, base, current);
  ptr += 0x3c;
}
