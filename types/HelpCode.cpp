/**
 * Definition: HelpCode
 * Hash: d53c56a4
 */

#include "HelpCode.h"

void HelpCode::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_d35e7ff, base, ptr);
  readData(&unk_e5a1921, base, ptr);
  readData(&szCommand, base, ptr);
}
