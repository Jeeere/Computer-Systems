#include <inttypes.h>
#include <math.h>

uint8_t kuusikulmio(uint32_t luku);

uint8_t kuusikulmio(uint32_t luku) {

    double n;
    double a;
    
    a = (double) sqrt((double) (8 * luku + 1));
    n = (a + 1) / 4;
    if (floorf(n) == n) {
        return 1;
    }
    else return 0;  
}