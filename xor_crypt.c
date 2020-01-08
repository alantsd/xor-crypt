#include <stdio.h>

void xor_crypt(uint8_t* buf, size_t len, uint8_t* key)
{
  for(int i = 0; i < len; ++i)
  {
    buf[i] = buf[i] ^ key[i];
  }
}
