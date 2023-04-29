/**
 * Definition: TutorialDefinition
 * Hash: 15d6711d
 */

#include "TutorialDefinition.h"

void TutorialDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwNextID, base, ptr);
  readData(&eType, base, ptr);
  readData(&dwFlags, base, ptr);
  readData(&unk_5da8477, base, ptr);
  readData(&unk_cc2b674, base, ptr);
  readData(&unk_e34e19d, base, ptr);
  readData(&eAlignHorizontal, base, ptr);
  readData(&eAlignVertical, base, ptr);
  readData(&vecOffset, base, ptr);
  readData(&unk_442c269, base, ptr);
}
