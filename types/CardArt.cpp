/**
 * Definition: CardArt
 * Hash: 10092e81
 */

#include "CardArt.h"

void CardArt::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_be78b25, base, current);
  current = ptr + 0x4;
  readData(&unk_7bf14a9, base, current);
  ptr += 0x8;
}
