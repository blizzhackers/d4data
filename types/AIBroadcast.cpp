/**
 * Definition: AIBroadcast
 * Hash: 8b019add
 */

#include "AIBroadcast.h"

void AIBroadcast::read(const char* base, char* &ptr) {
  readData(&snoAIState, base, ptr);
  readData(&flRadius, base, ptr);
  readData(&snoCondition, base, ptr);
}
