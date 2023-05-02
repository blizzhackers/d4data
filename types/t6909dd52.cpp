/**
 * Definition: t6909dd52
 * Hash: 6909dd52
 */

#include "t6909dd52.h"

void t6909dd52::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_3c1684f, base, current);
  current = ptr + 0x98;
  readData(&ptVertices, base, current);
  current = ptr + 0xa8;
  readData(&ptFaces, base, current);
  current = ptr + 0xb8;
  readData(&ptDistanceConstraints, base, current);
  current = ptr + 0xc8;
  readData(&ptBendingConstraints, base, current);
  current = ptr + 0xd8;
  readData(&unk_28c4640, base, current);
  current = ptr + 0xe8;
  readData(&ptCapsules, base, current);
  current = ptr + 0xf8;
  readData(&ptPlanes, base, current);
  current = ptr + 0x108;
  readData(&unk_a51816d, base, current);
  current = ptr + 0x118;
  readData(&unk_4b1b0fd, base, current);
  ptr += 0x128;
}
