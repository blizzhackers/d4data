/**
 * Definition: VisualItem
 * Hash: 5c983dc3
 */

#include "VisualItem.h"

void VisualItem::read(const char* base, char* &ptr) {
  readData(&snoItem, base, ptr);
  readData(&snoDye, base, ptr);
}
