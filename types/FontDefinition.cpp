/**
 * Definition: FontDefinition
 * Hash: d962ec80
 */

#include "FontDefinition.h"

void FontDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&eHintingMode, base, ptr);
  readData(&eHintingStyle, base, ptr);
  readData(&unk_da11db, base, ptr);
  readData(&unk_316a8bf, base, ptr);
  readData(&flAdvanceScalar, base, ptr);
  readData(&unk_994b88a, base, ptr);
  readData(&unk_d5350c2, base, ptr);
  readData(&unk_d0cc8d7, base, ptr);
  readData(&unk_7def5b8, base, ptr);
  readData(&unk_7310d17, base, ptr);
  readData(&unk_428af64, base, ptr);
  readData(&unk_9771bb, base, ptr);
  readData(&unk_4ca851, base, ptr);
  readData(&unk_820c304, base, ptr);
  readData(&unk_b5b5e50, base, ptr);
  readData(&ptPostData, base, ptr);
  readData(&unk_2cd1580, base, ptr);
}
