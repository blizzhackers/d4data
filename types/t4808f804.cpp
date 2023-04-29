/**
 * Definition: t4808f804
 * Hash: 4808f804
 */

#include "t4808f804.h"

void t4808f804::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&tDuration, base, ptr);
  readData(&dwTriggerFlags, base, ptr);
  readData(&unk_a936bd9, base, ptr);
  readData(&tCleanup, base, ptr);
  readData(&unk_49e9257, base, ptr);
  readData(&unk_5490979, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&szCameraMarker, base, ptr);
  readData(&unk_8f65c3f, base, ptr);
  readData(&unk_5b85276, base, ptr);
  readData(&unk_daebe18, base, ptr);
  readData(&unk_6101673, base, ptr);
  readData(&unk_8470ffc, base, ptr);
  readData(&unk_46c8459, base, ptr);
  readData(&vecTargetOffset, base, ptr);
  readData(&unk_70ccb7e, base, ptr);
  readData(&unk_f294e79, base, ptr);
  readData(&unk_991ae81, base, ptr);
}
