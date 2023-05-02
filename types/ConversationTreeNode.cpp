/**
 * Definition: ConversationTreeNode
 * Hash: c1d407b1
 */

#include "ConversationTreeNode.h"

void ConversationTreeNode::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_cf3ce, base, current);
  current = ptr + 0x14;
  readData(&unk_bbc67ad, base, current);
  current = ptr + 0x18;
  readData(&unk_3ef8e38, base, current);
  current = ptr + 0x20;
  readData(&ptNextNode, base, current);
  current = ptr + 0x28;
  readData(&dwFlags, base, current);
  current = ptr + 0x30;
  readData(&szComment, base, current);
  ptr += 0x40;
}
