/**
 * Definition: MailReadMessage
 * Hash: 9c727764
 */

#include "MailReadMessage.h"

void MailReadMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&idMail, base, current);
  ptr += 0x20;
}
