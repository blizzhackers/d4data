/**
 * Definition: DebugActorTooltipMessage
 * Hash: f9341030
 */

#include "DebugActorTooltipMessage.h"

void DebugActorTooltipMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&szTooltip, base, current);
  ptr += 0x418;
}
