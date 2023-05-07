/**
 * Definition: TryConsoleCommand
 * Hash: f491a0f1
 */

#include "TryConsoleCommand.h"

void TryConsoleCommand::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_dce541c, base, current);
  current = ptr + 0x14;
  readData(&unk_243faa3, base, current);
  current = ptr + 0x1c;
  readData(&usMessage, base, current);
  current = ptr + 0x41c;
  readData(&tPlaceTarget, base, current);
  current = ptr + 0x430;
  readData(&annTarget, base, current);
  current = ptr + 0x438;
  readData(&dwFlags, base, current);
  ptr += 0x43c;
}
