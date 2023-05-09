/**
 * Definition: AnimPayloadData
 * Hash: 89e36869
 */

#include "AnimPayloadData.h"

void AnimPayloadData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&ptBoneNames, base, current);
  current = ptr + 0x10;
  readData(&unk_a9ead38, base, current);
  current = ptr + 0x20;
  readData(&unk_8c9e18f, base, current);
  current = ptr + 0x30;
  readData(&pwvNonlinearOffset, base, current);
  current = ptr + 0x40;
  readData(&unk_5cd81c8, base, current);
  current = ptr + 0x50;
  readData(&unk_fa7ecfb, base, current);
  current = ptr + 0x60;
  readData(&unk_28a8e7b, base, current);
  current = ptr + 0x70;
  readData(&unk_772730e, base, current);
  current = ptr + 0x80;
  readData(&unk_7c60205, base, current);
  current = ptr + 0x90;
  readData(&unk_d77f652, base, current);
  current = ptr + 0xa0;
  readData(&ptTranslationCurves, base, current);
  current = ptr + 0xb0;
  readData(&ptRotationCurves, base, current);
  current = ptr + 0xc0;
  readData(&ptScaleCurves, base, current);
  ptr += 0xd0;
}
