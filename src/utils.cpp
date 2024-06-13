#include "quark/utils.h"
#include <openssl/sha.h>

using namespace quark;

std::string quark::sha1(const std::string& data){
    unsigned char hash[SHA_DIGEST_LENGTH];
    SHA1(reinterpret_cast<const unsigned char*>(data.c_str()), data.size(), hash);
    char buf[2 * SHA_DIGEST_LENGTH + 1];
    buf[2 * SHA_DIGEST_LENGTH] = 0;
    for(int i=0; i<SHA_DIGEST_LENGTH; ++i){
        sprintf(buf + i * 2, "%02x", hash[i]);
    }
    return std::string(buf);
}