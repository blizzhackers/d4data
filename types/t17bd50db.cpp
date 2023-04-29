/**
 * Definition: t17bd50db
 * Hash: 17bd50db
 */

#include "t17bd50db.h"

void t17bd50db::read(const char* base, char* &ptr) {
  readData(&unk_20b45d7, base, ptr);
  readData(&eType, base, ptr);
  readData(&flRadius, base, ptr);
  readData(&flLength, base, ptr);
  readData(&aPitch, base, ptr);
  readData(&aYaw, base, ptr);
  readData(&unk_711980c, base, ptr);
}
