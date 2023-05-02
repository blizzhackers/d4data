/**
 * Definition: ScriptedAchievementEvent
 * Hash: c6bbf7a9
 */

#include "ScriptedAchievementEvent.h"

void ScriptedAchievementEvent::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  ptr += 0x104;
}
