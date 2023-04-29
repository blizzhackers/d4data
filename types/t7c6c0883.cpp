/**
 * Definition: t7c6c0883
 * Hash: 7c6c0883
 */

#include "t7c6c0883.h"

void t7c6c0883::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoConversation, base, ptr);
}
