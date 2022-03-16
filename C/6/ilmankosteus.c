#include <inttypes.h>
#include <stdio.h>

float kosteus(uint16_t rekisteri);

/*
int main() {

    int tulos;

    tulos = kosteus(0b1000000000000000);
    printf("...",tulos);

    return 0;
}
*/

float kosteus(uint16_t rekisteri) {

    float a;

    a = ((float)rekisteri / 65536) * 100;

    return a;
}