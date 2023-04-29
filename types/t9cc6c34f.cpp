/**
 * Definition: t9cc6c34f
 * Hash: 9cc6c34f
 */

#include "t9cc6c34f.h"

void t9cc6c34f::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&snoActor, base, ptr);
  readData(&unk_39ae9c2, base, ptr);
  readData(&unk_ed94303, base, ptr);
  readData(&unk_5cc9c95, base, ptr);
  readData(&unk_462cedb, base, ptr);
  readData(&unk_61a5ad0, base, ptr);
  readData(&unk_223db49, base, ptr);
}
