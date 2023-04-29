/**
 * Definition: LogoutContextMessage
 * Hash: 10890f04
 */

#include "LogoutContextMessage.h"

void LogoutContextMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&eLogoutContext, base, ptr);
}
