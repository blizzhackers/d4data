/**
 * Definition: InterpolationPathHeader
 * Hash: 963edd7e
 */

#include "InterpolationPathHeader.h"

void InterpolationPathHeader::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tLoopPointStart, base, current);
  current = ptr + 0x4;
  readData(&tLoopPointEnd, base, current);
  current = ptr + 0x8;
  readData(&nDistributionFunction, base, current);
  current = ptr + 0xc;
  readData(&unk_2312508, base, current);
  current = ptr + 0x10;
  readData(&arInterpScalar, base, current);
  current = ptr + 0x20;
  readData(&dwFlags, base, current);
  ptr += 0x28;
}
