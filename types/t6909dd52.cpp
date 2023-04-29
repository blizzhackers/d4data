/**
 * Definition: t6909dd52
 * Hash: 6909dd52
 */

#include "t6909dd52.h"

void t6909dd52::read(const char* base, char* &ptr) {
  readData(&unk_3c1684f, base, ptr);
  readData(&ptVertices, base, ptr);
  readData(&ptFaces, base, ptr);
  readData(&ptDistanceConstraints, base, ptr);
  readData(&ptBendingConstraints, base, ptr);
  readData(&unk_28c4640, base, ptr);
  readData(&ptCapsules, base, ptr);
  readData(&ptPlanes, base, ptr);
  readData(&unk_a51816d, base, ptr);
  readData(&unk_4b1b0fd, base, ptr);
}
