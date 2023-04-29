/**
 * Definition: t3adfcfd4
 * Hash: 3adfcfd4
 */

#include "t3adfcfd4.h"

void t3adfcfd4::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&szName, base, ptr);
  readData(&snoWorld, base, ptr);
  readData(&unk_d6d0056, base, ptr);
  readData(&snoActor, base, ptr);
  readData(&unk_a3ac836, base, ptr);
  readData(&unk_cd15187, base, ptr);
  readData(&arrItems, base, ptr);
  readData(&unk_87a6362, base, ptr);
}
