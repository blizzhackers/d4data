/**
 * Definition: te80241b7
 * Hash: e80241b7
 */

#include "te80241b7.h"

void te80241b7::read(const char* base, char* &ptr) {
  readData(&unk_6c0cb90, base, ptr);
  readData(&unk_b7593d9, base, ptr);
  readData(&unk_b8d46b, base, ptr);
  readData(&unk_ef17f0b, base, ptr);
  readData(&unk_71e61d, base, ptr);
  readData(&unk_aec0875, base, ptr);
  readData(&unk_24ebc07, base, ptr);
  readData(&snoHighlight, base, ptr);
  readData(&unk_5f72810, base, ptr);
  readData(&snoOccluded, base, ptr);
  readData(&snoDepth, base, ptr);
  readData(&snoCookie, base, ptr);
  readData(&unk_49badc, base, ptr);
  readData(&snoUIRActor, base, ptr);
  readData(&unk_d2ef4a4, base, ptr);
  readData(&unk_445df1d, base, ptr);
  readData(&unk_34304af, base, ptr);
  readData(&snoPowerCenters, base, ptr);
}
