#include <inttypes.h>
#include <math.h>

float valoisuus(uint16_t rekisteri);

float valoisuus(uint16_t rekisteri) {

    uint16_t e, r;
    
    r = rekisteri & 0b0000111111111111;
    e = (rekisteri & 0b1111000000000000) >> 12;
    
    e = pow(2,e);
    
    return 0.01 * e * r;
}