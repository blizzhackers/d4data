/**
 * Definition: AttributesSetValuesMessage
 * Hash: 11efee8
 */

#include "AttributesSetValuesMessage.h"

void AttributesSetValuesMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&atKeyVals, base, current);
  ptr += 0x10c;
}
