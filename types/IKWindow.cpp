/**
 * Definition: IKWindow
 * Hash: beb0662c
 */

#include "IKWindow.h"

void IKWindow::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_fa00882, base, current);
  ptr += 0x8;
}
