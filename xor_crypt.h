#ifndef XOR_CRYPT_H
#define XOR_CRYPT_H

#ifdef __cplusplus
extern "C" {
#endif

void xor_encrypt(uint8_t* buf, size_t len, uint8_t* key);
void xor_decrypt(uint8_t* buf, size_t len, uint8_t* key);
  
#ifdef __cplusplus
}
#endif

#endif /* XOR_CRYPT_H */
