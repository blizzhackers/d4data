/**
 * Definition: EyeColorDefinition
 * Hash: b065ae4b
 */

#include "EyeColorDefinition.h"

void EyeColorDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&nSortOrder, base, ptr);
  readData(&unk_9da2273, base, ptr);
  readData(&unk_d38eaf, base, ptr);
  readData(&unk_14411e2, base, ptr);
  readData(&unk_e44f1c2, base, ptr);
  readData(&unk_fe33d19, base, ptr);
  readData(&unk_66d7f27, base, ptr);
  readData(&unk_4c3856, base, ptr);
  readData(&unk_ca1b6fd, base, ptr);
  readData(&unk_746a073, base, ptr);
  readData(&unk_245a457, base, ptr);
  readData(&unk_17a90ea, base, ptr);
  readData(&unk_298f417, base, ptr);
  readData(&unk_ef6e5d4, base, ptr);
  readData(&unk_cde5290, base, ptr);
  readData(&unk_38b2725, base, ptr);
  readData(&unk_141142a, base, ptr);
  readData(&unk_1c12aa0, base, ptr);
  readData(&unk_df7a801, base, ptr);
}
