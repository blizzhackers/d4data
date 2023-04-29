/**
 * Definition: ScriptedAchievementEvent
 * Hash: c6bbf7a9
 */

#include "ScriptedAchievementEvent.h"

void ScriptedAchievementEvent::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
}
