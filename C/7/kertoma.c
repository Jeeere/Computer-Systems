#include <inttypes.h>

int64_t laske_kertoma(int8_t n);

int64_t laske_kertoma(int8_t n) {

    int8_t a;
    int64_t b = 1;

    if (n > 20) {
        return -1;
    }
    else {
        for (a = 1; a <= n; ++a) {
            b *= a;
        }
        return b;
    }
}