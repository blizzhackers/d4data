/**
 * Definition: PetType
 * Hash: 22f3fab
 */

#include "PetType.h"

void PetType::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x104;
  readData(&unk_887ea65, base, current);
  current = ptr + 0x108;
  readData(&unk_17d5315, base, current);
  current = ptr + 0x10c;
  readData(&unk_a9f95f3, base, current);
  current = ptr + 0x110;
  readData(&unk_9a99f28, base, current);
  ptr += 0x114;
}
