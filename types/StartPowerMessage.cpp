/**
 * Definition: StartPowerMessage
 * Hash: a245a560
 */

#include "StartPowerMessage.h"

void StartPowerMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x14;
  readData(&snoPower, base, current);
  current = ptr + 0x18;
  readData(&unk_f1dd66f, base, current);
  current = ptr + 0x20;
  readData(&tAnimPreplayData, base, current);
  current = ptr + 0x38;
  readData(&unk_2468977, base, current);
  current = ptr + 0x40;
  readData(&unk_200dc25, base, current);
  current = ptr + 0x4c;
  readData(&wpTarget, base, current);
  current = ptr + 0x64;
  readData(&wpTargetOffset, base, current);
  ptr += 0x74;
}
