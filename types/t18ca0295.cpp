/**
 * Definition: t18ca0295
 * Hash: 18ca0295
 */

#include "t18ca0295.h"

void t18ca0295::read(const char* base, char* &ptr) {
  readData(&bReverseOrder, base, ptr);
  readData(&bHorizontal, base, ptr);
  readData(&unk_f89660f, base, ptr);
  readData(&unk_3385ab6, base, ptr);
  readData(&unk_3a57c53, base, ptr);
  readData(&nStackSpacing, base, ptr);
  readData(&unk_e1c6bf3, base, ptr);
  readData(&tMargins, base, ptr);
}
