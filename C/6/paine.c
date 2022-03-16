#include <inttypes.h>
#include <stdio.h>

uint32_t ilmanpaine(uint8_t xlsb, uint8_t lsb, uint8_t msb);

uint32_t ilmanpaine(uint8_t xlsb, uint8_t lsb, uint8_t msb) {

    uint32_t tulos;

    tulos = (msb << 12) | (lsb << 4) | (xlsb >> 4);
    
    return tulos;
}