/**
 * Definition: DebugActorTooltipMessage
 * Hash: f9341030
 */

#include "DebugActorTooltipMessage.h"

void DebugActorTooltipMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&szTooltip, base, ptr);
}
