/**
 * Definition: t7139371b
 * Hash: 7139371b
 */

#include "t7139371b.h"

void t7139371b::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&wpPos, base, ptr);
  readData(&unk_3e7e17e, base, ptr);
  readData(&unk_de913dd, base, ptr);
}
