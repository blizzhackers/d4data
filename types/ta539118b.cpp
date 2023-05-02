/**
 * Definition: ta539118b
 * Hash: a539118b
 */

#include "ta539118b.h"

void ta539118b::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoPower, base, current);
  current = ptr + 0x4;
  readData(&dwDataID, base, current);
  current = ptr + 0x8;
  readData(&szName, base, current);
  current = ptr + 0x28;
  readData(&unk_b9911d6, base, current);
  current = ptr + 0x34;
  readData(&unk_5806b77, base, current);
  current = ptr + 0x3c;
  readData(&snoEffectGroup, base, current);
  current = ptr + 0x44;
  readData(&unk_44f1451, base, current);
  current = ptr + 0x4c;
  readData(&unk_8e5694d, base, current);
  current = ptr + 0x54;
  readData(&dwStartTick, base, current);
  current = ptr + 0x5c;
  readData(&dwDuration, base, current);
  current = ptr + 0x64;
  readData(&unk_12497d5, base, current);
  ptr += 0x6c;
}
