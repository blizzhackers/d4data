/**
 * Definition: ValidComponent
 * Hash: a96996c3
 */

#include "ValidComponent.h"

void ValidComponent::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tComponent, base, current);
  ptr += 0x4;
}
