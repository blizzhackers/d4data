/**
 * Definition: tb76a31b5
 * Hash: b76a31b5
 */

#include "tb76a31b5.h"

void tb76a31b5::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&m_transform1, base, current);
  current = ptr + 0x20;
  readData(&m_transform2, base, current);
  current = ptr + 0x40;
  readData(&m_localFrame, base, current);
  current = ptr + 0x60;
  readData(&m_normal, base, current);
  current = ptr + 0x70;
  readData(&m_stiffness, base, current);
  current = ptr + 0x74;
  readData(&m_friction, base, current);
  current = ptr + 0x78;
  readData(&m_boneIndex, base, current);
  current = ptr + 0x7a;
  readData(&m_padding, base, current);
  ptr += 0x80;
}
