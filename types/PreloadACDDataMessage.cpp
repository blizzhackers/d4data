/**
 * Definition: PreloadACDDataMessage
 * Hash: b88cdb6e
 */

#include "PreloadACDDataMessage.h"

void PreloadACDDataMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&snoActor, base, current);
  current = ptr + 0x1c;
  readData(&unk_f1e8af8, base, current);
  current = ptr + 0xa0;
  readData(&unk_144680, base, current);
  current = ptr + 0xa4;
  readData(&unk_ed94303, base, current);
  current = ptr + 0xb0;
  readData(&tPlayerACDInfo, base, current);
  current = ptr + 0x424;
  readData(&tMountACDInfo, base, current);
  current = ptr + 0x434;
  readData(&tMonsterACDInfo, base, current);
  current = ptr + 0x470;
  readData(&unk_223db49, base, current);
  ptr += 0x48c;
}
