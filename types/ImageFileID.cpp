/**
 * Definition: ImageFileID
 * Hash: fb3f03d0
 */

#include "ImageFileID.h"

void ImageFileID::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szFileName, base, current);
  current = ptr + 0x100;
  readData(&szSourceFileName, base, current);
  current = ptr + 0x200;
  readData(&nFrameIndex, base, current);
  ptr += 0x204;
}
