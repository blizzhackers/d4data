/**
 * Definition: ta539118b
 * Hash: a539118b
 */

#include "ta539118b.h"

void ta539118b::read(const char* base, char* &ptr) {
  readData(&snoPower, base, ptr);
  readData(&dwDataID, base, ptr);
  readData(&szName, base, ptr);
  readData(&unk_b9911d6, base, ptr);
  readData(&unk_5806b77, base, ptr);
  readData(&snoEffectGroup, base, ptr);
  readData(&unk_44f1451, base, ptr);
  readData(&unk_8e5694d, base, ptr);
  readData(&dwStartTick, base, ptr);
  readData(&dwDuration, base, ptr);
  readData(&unk_12497d5, base, ptr);
}
