//Jäsennä merkkijono

#include <inttypes.h>
#include <string.h>

int8_t parse(char *str, char *sep, char *arg);

int8_t parse(char *str, char *sep, char *arg) {
    char *token;
    int8_t a = 0;

    //Erota ensimmäinen osa
    token = strtok(str,sep);

    //Erota loput osat
    while( token != NULL ) {
        a = a + 1;
        token = strtok(NULL, sep);
        if(strcmp(token,arg) == 0) {
            return a;
        }
    }
    return 0;
}