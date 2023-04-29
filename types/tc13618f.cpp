/**
 * Definition: tc13618f
 * Hash: c13618f
 */

#include "tc13618f.h"

void tc13618f::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&arActorGroups, base, ptr);
  readData(&unk_b5b0f9a, base, ptr);
  readData(&snoScript, base, ptr);
  readData(&unk_a497096, base, ptr);
  readData(&unk_7a5aecd, base, ptr);
  readData(&unk_8e70eff, base, ptr);
  readData(&unk_c627b16, base, ptr);
  readData(&unk_ba8fd29, base, ptr);
}
