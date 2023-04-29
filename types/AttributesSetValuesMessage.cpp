/**
 * Definition: AttributesSetValuesMessage
 * Hash: 11efee8
 */

#include "AttributesSetValuesMessage.h"

void AttributesSetValuesMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&atKeyVals, base, ptr);
}
