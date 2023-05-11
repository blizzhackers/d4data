/**
 * Definition: t97efd3aa
 * Hash: 97efd3aa
 */

#include "t97efd3aa.h"

void t97efd3aa::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_ceba35b, base, current);
  current = ptr + 0x38;
  readData(&arNpcTemplates, base, current);
  current = ptr + 0x48;
  readData(&unk_86e0b08, base, current);
  current = ptr + 0x58;
  readData(&unk_c803258, base, current);
  current = ptr + 0x68;
  readData(&unk_3733127, base, current);
  current = ptr + 0x78;
  readData(&unk_a47b076, base, current);
  current = ptr + 0x88;
  readData(&unk_a884bb, base, current);
  current = ptr + 0x98;
  readData(&arGizmoTemplates, base, current);
  current = ptr + 0xa8;
  readData(&arDeathTemplates, base, current);
  current = ptr + 0xb8;
  readData(&arDeathLookTemplates, base, current);
  current = ptr + 0xc8;
  readData(&arDeathMaterialTemplates, base, current);
  ptr += 0xd8;
}
