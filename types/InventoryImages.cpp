/**
 * Definition: InventoryImages
 * Hash: d92968e4
 */

#include "InventoryImages.h"

void InventoryImages::read(const char* base, char* &ptr) {
  readData(&hDefaultImage, base, ptr);
  readData(&hFemaleImage, base, ptr);
}
