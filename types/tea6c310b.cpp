/**
 * Definition: tea6c310b
 * Hash: ea6c310b
 */

#include "tea6c310b.h"

void tea6c310b::read(const char* base, char* &ptr) {
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
  readData(&dwObjectID, base, ptr);
  readData(&flBlendTime, base, ptr);
  readData(&unk_7b01c79, base, ptr);
  readData(&unk_30b49c2, base, ptr);
  readData(&unk_8781d26, base, ptr);
  readData(&unk_9a31592, base, ptr);
  readData(&unk_dc3a5eb, base, ptr);
  readData(&unk_9de2797, base, ptr);
  readData(&unk_a91f1a5, base, ptr);
  readData(&unk_9fca8d1, base, ptr);
  readData(&unk_71c05df, base, ptr);
  readData(&unk_325b1ab, base, ptr);
  readData(&unk_6ca113c, base, ptr);
  readData(&unk_7da6e33, base, ptr);
  readData(&unk_5b85276, base, ptr);
  readData(&unk_cf03a43, base, ptr);
  readData(&unk_daebe18, base, ptr);
  readData(&unk_6101673, base, ptr);
  readData(&unk_8470ffc, base, ptr);
  readData(&unk_46c8459, base, ptr);
  readData(&unk_3d8709e, base, ptr);
  readData(&unk_991ae81, base, ptr);
  readData(&unk_90448b, base, ptr);
  readData(&unk_c443c2, base, ptr);
  readData(&unk_741563, base, ptr);
}
