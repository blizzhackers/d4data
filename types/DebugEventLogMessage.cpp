/**
 * Definition: DebugEventLogMessage
 * Hash: 23c42d70
 */

#include "DebugEventLogMessage.h"

void DebugEventLogMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&szLogString, base, current);
  current = ptr + 0x3f8;
  readData(&unk_a23ac9b, base, current);
  current = ptr + 0x400;
  readData(&unk_6248a18, base, current);
  current = ptr + 0x404;
  readData(&aMetaData, base, current);
  current = ptr + 0x3408;
  readData(&ann, base, current);
  ptr += 0x3418;
}
