/**
 * Definition: TrackPieces
 * Hash: fe95772e
 */

#include "TrackPieces.h"

void TrackPieces::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_362349d, base, current);
  current = ptr + 0x14;
  readData(&nPadding, base, current);
  current = ptr + 0x18;
  readData(&hPieceFrame, base, current);
  ptr += 0x28;
}
