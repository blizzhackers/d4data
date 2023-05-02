/**
 * Definition: LogoutContextMessage
 * Hash: 10890f04
 */

#include "LogoutContextMessage.h"

void LogoutContextMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&eLogoutContext, base, current);
  ptr += 0x14;
}
