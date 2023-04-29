/**
 * Definition: t89e36869
 * Hash: 89e36869
 */

#include "t89e36869.h"

void t89e36869::read(const char* base, char* &ptr) {
  readData(&ptBoneNames, base, ptr);
  readData(&unk_a9ead38, base, ptr);
  readData(&unk_8c9e18f, base, ptr);
  readData(&pwvNonlinearOffset, base, ptr);
  readData(&unk_5cd81c8, base, ptr);
  readData(&unk_fa7ecfb, base, ptr);
  readData(&unk_28a8e7b, base, ptr);
  readData(&unk_772730e, base, ptr);
  readData(&unk_7c60205, base, ptr);
  readData(&unk_d77f652, base, ptr);
  readData(&ptTranslationCurves, base, ptr);
  readData(&ptRotationCurves, base, ptr);
  readData(&ptScaleCurves, base, ptr);
}
