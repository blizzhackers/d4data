/**
 * Definition: t9b2fb163
 * Hash: 9b2fb163
 */

#include "t9b2fb163.h"

void t9b2fb163::read(const char* base, char* &ptr) {
  readData(&szName, base, ptr);
  readData(&tInfo, base, ptr);
  readData(&dwValue, base, ptr);
}
