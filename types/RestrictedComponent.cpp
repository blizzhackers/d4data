/**
 * Definition: RestrictedComponent
 * Hash: ea88ceec
 */

#include "RestrictedComponent.h"

void RestrictedComponent::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_461add4, base, current);
  current = ptr + 0x8;
  readData(&ptValidComponents, base, current);
  ptr += 0x48;
}
