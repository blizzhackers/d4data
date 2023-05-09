/**
 * Definition: QuestTagsEntry
 * Hash: db09f2f3
 */

#include "QuestTagsEntry.h"

void QuestTagsEntry::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  ptr += 0x104;
}
