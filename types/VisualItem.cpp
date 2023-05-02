/**
 * Definition: VisualItem
 * Hash: 5c983dc3
 */

#include "VisualItem.h"

void VisualItem::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoItem, base, current);
  current = ptr + 0x4;
  readData(&snoDye, base, current);
  ptr += 0x8;
}
