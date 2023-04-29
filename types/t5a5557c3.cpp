/**
 * Definition: t5a5557c3
 * Hash: 5a5557c3
 */

#include "t5a5557c3.h"

void t5a5557c3::read(const char* base, char* &ptr) {
  readData(&dwID, base, ptr);
  readData(&szTag, base, ptr);
  readData(&snoSound, base, ptr);
  readData(&unk_903b4d6, base, ptr);
  readData(&unk_48259c7, base, ptr);
  readData(&dwFlags, base, ptr);
}
