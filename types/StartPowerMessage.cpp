/**
 * Definition: StartPowerMessage
 * Hash: a245a560
 */

#include "StartPowerMessage.h"

void StartPowerMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoPower, base, ptr);
  readData(&unk_f1dd66f, base, ptr);
  readData(&tAnimPreplayData, base, ptr);
  readData(&unk_2468977, base, ptr);
  readData(&unk_200dc25, base, ptr);
  readData(&wpTarget, base, ptr);
  readData(&wpTargetOffset, base, ptr);
}
