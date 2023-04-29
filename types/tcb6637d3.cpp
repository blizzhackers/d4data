/**
 * Definition: tcb6637d3
 * Hash: cb6637d3
 */

#include "tcb6637d3.h"

void tcb6637d3::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_f0a462f, base, ptr);
}
