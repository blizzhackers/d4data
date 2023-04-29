/**
 * Definition: TexFrame
 * Hash: 171befc
 */

#include "TexFrame.h"

void TexFrame::read(const char* base, char* &ptr) {
  readData(&hImageHandle, base, ptr);
  readData(&flU0, base, ptr);
  readData(&flV0, base, ptr);
  readData(&flU1, base, ptr);
  readData(&flV1, base, ptr);
  readData(&unk_8081ff3, base, ptr);
  readData(&unk_8082014, base, ptr);
  readData(&unk_8081ff4, base, ptr);
  readData(&unk_8082015, base, ptr);
}
