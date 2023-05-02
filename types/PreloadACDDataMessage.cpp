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
  readData(&unk_5cc9c95, base, current);
  current = ptr + 0x41c;
  readData(&unk_462cedb, base, current);
  current = ptr + 0x42c;
  readData(&unk_61a5ad0, base, current);
  current = ptr + 0x468;
  readData(&unk_223db49, base, current);
  ptr += 0x484;
}
