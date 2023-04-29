/**
 * Definition: t72f0f9bb
 * Hash: 72f0f9bb
 */

#include "t72f0f9bb.h"

void t72f0f9bb::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoMarkingShape, base, ptr);
  readData(&snoMarkingColor, base, ptr);
  readData(&snoJewelry, base, ptr);
  readData(&snoMakeup, base, ptr);
}
