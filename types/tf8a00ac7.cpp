/**
 * Definition: tf8a00ac7
 * Hash: f8a00ac7
 */

#include "tf8a00ac7.h"

void tf8a00ac7::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&unk_a82d707, base, ptr);
  readData(&flDuration, base, ptr);
  readData(&flDistance, base, ptr);
  readData(&unk_991ae81, base, ptr);
}
