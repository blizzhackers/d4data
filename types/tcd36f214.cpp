/**
 * Definition: tcd36f214
 * Hash: cd36f214
 */

#include "tcd36f214.h"

void tcd36f214::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_f331b12, base, current);
  current = ptr + 0x4;
  readData(&unk_f331b13, base, current);
  current = ptr + 0x8;
  readData(&unk_268ccfa, base, current);
  current = ptr + 0xc;
  readData(&unk_268cd02, base, current);
  current = ptr + 0x10;
  readData(&unk_268cd00, base, current);
  current = ptr + 0x14;
  readData(&unk_268ccf0, base, current);
  current = ptr + 0x18;
  readData(&hText, base, current);
  current = ptr + 0x20;
  readData(&nFontSizeFallback, base, current);
  current = ptr + 0x24;
  readData(&unk_ad7d5ca, base, current);
  current = ptr + 0x28;
  readData(&unk_748233d, base, current);
  current = ptr + 0x2c;
  readData(&eTextJustify, base, current);
  current = ptr + 0x30;
  readData(&eTextJustifyVertical, base, current);
  current = ptr + 0x34;
  readData(&unk_4cfc33f, base, current);
  current = ptr + 0x38;
  readData(&unk_103d77a, base, current);
  current = ptr + 0x3c;
  readData(&unk_f293927, base, current);
  current = ptr + 0x40;
  readData(&unk_9bfa5c8, base, current);
  current = ptr + 0x44;
  readData(&bWordWrap, base, current);
  current = ptr + 0x48;
  readData(&bShrinkToFit, base, current);
  current = ptr + 0x4c;
  readData(&eResizeToFit, base, current);
  current = ptr + 0x50;
  readData(&bHyperlinkAware, base, current);
  current = ptr + 0x54;
  readData(&bPassword, base, current);
  current = ptr + 0x58;
  readData(&bSelectable, base, current);
  current = ptr + 0x5c;
  readData(&bUseDropShadow, base, current);
  current = ptr + 0x60;
  readData(&unk_c5637af, base, current);
  current = ptr + 0x64;
  readData(&unk_9e52c15, base, current);
  current = ptr + 0x68;
  readData(&unk_4a9de9d, base, current);
  ptr += 0x6c;
}
