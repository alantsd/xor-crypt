#include "xor_crypt.h"

void xor_encrypt(uint8_t* buf, size_t len, uint8_t* key)
{
  for(int i = 0; i < len; ++i)
  {
    buf[i] = buf[i] ^ key[i];
  }
}

void xor_decrypt(uint8_t* buf, size_t len, uint8_t* key)
{
    xor_encrypt(buf, len, key);
}
  
