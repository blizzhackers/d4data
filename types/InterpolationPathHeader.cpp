/**
 * Definition: InterpolationPathHeader
 * Hash: 963edd7e
 */

#include "InterpolationPathHeader.h"

void InterpolationPathHeader::read(const char* base, char* &ptr) {
  readData(&tLoopPointStart, base, ptr);
  readData(&tLoopPointEnd, base, ptr);
  readData(&nDistributionFunction, base, ptr);
  readData(&unk_2312508, base, ptr);
  readData(&unk_463fc3b, base, ptr);
  readData(&dwFlags, base, ptr);
}
