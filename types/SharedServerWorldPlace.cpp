/**
 * Definition: SharedServerWorldPlace
 * Hash: ec9295b
 */

#include "SharedServerWorldPlace.h"

void SharedServerWorldPlace::read(const char* base, char* &ptr) {
  readData(&wp, base, ptr);
  readData(&idSWorld, base, ptr);
}
