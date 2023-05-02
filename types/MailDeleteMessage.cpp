/**
 * Definition: MailDeleteMessage
 * Hash: 1d35fa3b
 */

#include "MailDeleteMessage.h"

void MailDeleteMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&idMail, base, current);
  ptr += 0x20;
}
