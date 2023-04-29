/**
 * Definition: CardArt
 * Hash: 10092e81
 */

#include "CardArt.h"

void CardArt::read(const char* base, char* &ptr) {
  readData(&unk_be78b25, base, ptr);
  readData(&unk_7bf14a9, base, ptr);
}
