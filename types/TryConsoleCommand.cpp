/**
 * Definition: TryConsoleCommand
 * Hash: f491a0f1
 */

#include "TryConsoleCommand.h"

void TryConsoleCommand::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_dce541c, base, ptr);
  readData(&unk_243faa3, base, ptr);
  readData(&vRMessage, base, ptr);
  readData(&tPlaceTarget, base, ptr);
  readData(&annTarget, base, ptr);
  readData(&dwFlags, base, ptr);
}
