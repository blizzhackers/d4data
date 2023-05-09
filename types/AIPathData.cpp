/**
 * Definition: AIPathData
 * Hash: 53a5f131
 */

#include "AIPathData.h"

void AIPathData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_29375a6, base, current);
  current = ptr + 0x10;
  readData(&unk_4eb2373, base, current);
  current = ptr + 0x20;
  readData(&unk_5d4c076, base, current);
  current = ptr + 0x30;
  readData(&unk_14f08f0, base, current);
  current = ptr + 0x38;
  readData(&unk_7a5d20a, base, current);
  current = ptr + 0x3c;
  readData(&m_cellWidth, base, current);
  current = ptr + 0x40;
  readData(&unk_ede9ae5, base, current);
  ptr += 0x48;
}
