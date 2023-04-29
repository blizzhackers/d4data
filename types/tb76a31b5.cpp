/**
 * Definition: tb76a31b5
 * Hash: b76a31b5
 */

#include "tb76a31b5.h"

void tb76a31b5::read(const char* base, char* &ptr) {
  readData(&m_transform1, base, ptr);
  readData(&m_transform2, base, ptr);
  readData(&m_localFrame, base, ptr);
  readData(&m_normal, base, ptr);
  readData(&unk_2252ea1, base, ptr);
  readData(&m_friction, base, ptr);
  readData(&m_boneIndex, base, ptr);
  readData(&m_padding, base, ptr);
}
