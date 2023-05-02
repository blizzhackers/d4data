/**
 * Definition: tf04e2aaf
 * Hash: f04e2aaf
 */

#include "tf04e2aaf.h"

void tf04e2aaf::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_35ae582, base, current);
  current = ptr + 0x18;
  readData(&unk_fa850a6, base, current);
  current = ptr + 0x20;
  readData(&unk_c241b89, base, current);
  current = ptr + 0x24;
  readData(&unk_ed9afed, base, current);
  current = ptr + 0x28;
  readData(&qRot, base, current);
  current = ptr + 0x3c;
  readData(&unk_9afdd21, base, current);
  ptr += 0x44;
}
