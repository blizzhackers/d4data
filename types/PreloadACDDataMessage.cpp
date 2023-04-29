/**
 * Definition: PreloadACDDataMessage
 * Hash: b88cdb6e
 */

#include "PreloadACDDataMessage.h"

void PreloadACDDataMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&snoActor, base, ptr);
  readData(&unk_f1e8af8, base, ptr);
  readData(&unk_144680, base, ptr);
  readData(&unk_ed94303, base, ptr);
  readData(&unk_5cc9c95, base, ptr);
  readData(&unk_462cedb, base, ptr);
  readData(&unk_61a5ad0, base, ptr);
  readData(&unk_223db49, base, ptr);
}
