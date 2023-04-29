/**
 * Definition: MonsterAwarenessInfo
 * Hash: db7aec9d
 */

#include "MonsterAwarenessInfo.h"

void MonsterAwarenessInfo::read(const char* base, char* &ptr) {
  readData(&flIdleRadius, base, ptr);
  readData(&flCombatRadius, base, ptr);
  readData(&flWarnOthersRadius, base, ptr);
  readData(&unk_7d4fa2f, base, ptr);
  readData(&unk_4eeb2ba, base, ptr);
  readData(&unk_3f45ddd, base, ptr);
  readData(&unk_d9ecad5, base, ptr);
}
