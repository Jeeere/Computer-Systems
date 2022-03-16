//Palindromi

#include <inttypes.h>
#include <string.h>

uint8_t palindromi(char *s, uint8_t length);

uint8_t palindromi(char *s, uint8_t length) {
    int i = 0;

    for(i=0; i<length / 2; i++) {
        if(s[i] != s[length-i-1]) {
            return i+1;
        }
    }
    return 0;
}