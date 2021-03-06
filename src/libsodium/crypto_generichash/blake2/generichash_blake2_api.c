#include "crypto_generichash_blake2b.h"

size_t
crypto_generichash_blake2b_bytes_min(void) {
    return crypto_generichash_blake2b_BYTES_MIN;
}

size_t
crypto_generichash_blake2b_bytes_max(void) {
    return crypto_generichash_blake2b_BYTES_MAX;
}

size_t
crypto_generichash_blake2b_keybytes_min(void) {
    return crypto_generichash_blake2b_KEYBYTES_MIN;
}

size_t
crypto_generichash_blake2b_keybytes_max(void) {
    return crypto_generichash_blake2b_KEYBYTES_MAX;
}

size_t
crypto_generichash_blake2b_blockbytes(void) {
    return crypto_generichash_blake2b_BLOCKBYTES;
}

size_t
crypto_generichash_blake2b_salt_bytes(void) {
    return crypto_generichash_blake2b_SALTBYTES;
}

size_t
crypto_generichash_blake2b_personal_bytes(void) {
    return crypto_generichash_blake2b_PERSONALBYTES;
}

const char *
crypto_generichash_blake2b_blockbytes_primitive(void) {
    return "blake2b";
}
