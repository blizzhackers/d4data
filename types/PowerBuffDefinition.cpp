/**
 * Definition: PowerBuffDefinition
 * Hash: 3fd70b39
 */

#include "PowerBuffDefinition.h"

void PowerBuffDefinition::read(const char* base, char* &ptr) {
  readData(&dwID, base, ptr);
  readData(&unk_47cbc6b, base, ptr);
  readData(&bHarmful, base, ptr);
  readData(&bInfinite, base, ptr);
  readData(&tDuration, base, ptr);
  readData(&tMaxStackCount, base, ptr);
  readData(&unk_89134c5, base, ptr);
  readData(&unk_6431ae9, base, ptr);
  readData(&bCancellable, base, ptr);
  readData(&unk_99b5752, base, ptr);
  readData(&unk_93cd85f, base, ptr);
  readData(&unk_5c11505, base, ptr);
  readData(&unk_9eb6fb0, base, ptr);
  readData(&unk_e8f1e19, base, ptr);
  readData(&unk_9cb4832, base, ptr);
  readData(&unk_71ba554, base, ptr);
  readData(&hIcon, base, ptr);
  readData(&unk_8008c5, base, ptr);
  readData(&unk_78b0ca1, base, ptr);
  readData(&unk_c35001, base, ptr);
  readData(&unk_395ccd6, base, ptr);
  readData(&unk_200bd12, base, ptr);
  readData(&tDOT, base, ptr);
  readData(&unk_dcb22bd, base, ptr);
  readData(&tCrowdControl, base, ptr);
  readData(&unk_e4aa036, base, ptr);
  readData(&unk_1e4754c, base, ptr);
}
