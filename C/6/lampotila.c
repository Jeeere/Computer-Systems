#include <stdio.h>
#include <inttypes.h>

float lampotila(uint16_t rekisteri, float kerroin);

/*
int main() {

    tulos = lampotila(uint16_t rekisteri, float kerroin);
    printf("...",tulos);

}
*/

float lampotila(uint16_t rekisteri, float kerroin) {

float a;
int b;

b = (int)((rekisteri) >> 2);
a = ((float)(b)) * kerroin;

return a;

}