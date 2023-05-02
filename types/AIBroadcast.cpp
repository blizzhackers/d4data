/**
 * Definition: AIBroadcast
 * Hash: 8b019add
 */

#include "AIBroadcast.h"

void AIBroadcast::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoAIState, base, current);
  current = ptr + 0x4;
  readData(&flRadius, base, current);
  current = ptr + 0x8;
  readData(&snoCondition, base, current);
  ptr += 0xc;
}
