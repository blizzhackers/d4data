/**
 * Definition: MailRetrieveMessage
 * Hash: 884adbae
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "tf5ac91bb.h"

#pragma push(pack, 1)

struct MailRetrieveMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  tf5ac91bb idMail;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
