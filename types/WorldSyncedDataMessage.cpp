/**
 * Definition: WorldSyncedDataMessage
 * Hash: e477fdad
 */

#include "WorldSyncedDataMessage.h"

void WorldSyncedDataMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&idSWorld, base, current);
  current = ptr + 0x18;
  readData(&tSyncedData, base, current);
  ptr += 0x63c;
}
