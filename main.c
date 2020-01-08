#include <stdio.h>
#include "xor_crypt.h"

int main()
{
  char string[11] = "A nice cat";
  char key[11]    = "SECRET_KEY";
  
  xor_crypt(string, 11, key);
 
  for(int i = 0; i < 10; ++i)
  {
    printf("0x%02x ", string[i]);
  }
  return 0;
}
