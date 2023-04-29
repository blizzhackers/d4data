/**
 * Definition: EffectGroupACDToACDMessage
 * Hash: 26817e12
 */

#include "EffectGroupACDToACDMessage.h"

void EffectGroupACDToACDMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoEffectGroup, base, ptr);
  readData(&annFrom, base, ptr);
  readData(&annTo, base, ptr);
  readData(&unk_b883005, base, ptr);
  readData(&unk_3f8ef50, base, ptr);
  readData(&unk_50e9159, base, ptr);
}
