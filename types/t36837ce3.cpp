/**
 * Definition: t36837ce3
 * Hash: 36837ce3
 */

#include "t36837ce3.h"

void t36837ce3::read(const char* base, char* &ptr) {
  readData(&tDefault, base, ptr);
  readData(&tHover, base, ptr);
  readData(&tTracked, base, ptr);
  readData(&unk_918ddb6, base, ptr);
  readData(&unk_e253b58, base, ptr);
  readData(&unk_c58ef7e, base, ptr);
  readData(&snoPattern, base, ptr);
  readData(&unk_a6fc3e4, base, ptr);
  readData(&unk_45e317c, base, ptr);
}
