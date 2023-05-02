/**
 * Definition: MonsterAwarenessInfo
 * Hash: db7aec9d
 */

#include "MonsterAwarenessInfo.h"

void MonsterAwarenessInfo::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&flIdleRadius, base, current);
  current = ptr + 0x4;
  readData(&flCombatRadius, base, current);
  current = ptr + 0x8;
  readData(&flWarnOthersRadius, base, current);
  current = ptr + 0xc;
  readData(&unk_7d4fa2f, base, current);
  current = ptr + 0x10;
  readData(&unk_4eeb2ba, base, current);
  current = ptr + 0x14;
  readData(&unk_3f45ddd, base, current);
  current = ptr + 0x18;
  readData(&unk_d9ecad5, base, current);
  ptr += 0x1c;
}
