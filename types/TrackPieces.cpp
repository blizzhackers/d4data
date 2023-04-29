/**
 * Definition: TrackPieces
 * Hash: fe95772e
 */

#include "TrackPieces.h"

void TrackPieces::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_362349d, base, ptr);
  readData(&nPadding, base, ptr);
  readData(&hPieceFrame, base, ptr);
}
