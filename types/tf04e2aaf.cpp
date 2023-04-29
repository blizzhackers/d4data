/**
 * Definition: tf04e2aaf
 * Hash: f04e2aaf
 */

#include "tf04e2aaf.h"

void tf04e2aaf::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_35ae582, base, ptr);
  readData(&unk_fa850a6, base, ptr);
  readData(&unk_c241b89, base, ptr);
  readData(&unk_ed9afed, base, ptr);
  readData(&qRot, base, ptr);
  readData(&unk_9afdd21, base, ptr);
}
