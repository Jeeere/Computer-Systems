//Hexspeak

#include <stdio.h>

int hexspeak(char *str, int len);

int hexspeak(char *str, int len) {
    int i;
    int a = 0;

    for(i=0; i<len; i++) {
        switch(str[i]) {
            case 'o':
                a += 1;
                printf("0");
                break;
            case 'O':
                a += 1;
                printf("0");
                break;
            case 'l':
                a += 1;
                printf("1");
                break;
            case 'L':
                a += 1;
                printf("1");
                break;
            case 's':
                a += 1;
                printf("5");
                break;
            case 'S':
                a += 1;
                printf("5");
                break;
            case 't':
                a += 1;
                printf("7");
                break;
            case 'T':
                a += 1;
                printf("7");
                break;
            case 'r':
                a += 1;
                printf("12");
                break;
            case 'R':
                a += 1;
                printf("12");
                break;
            case 'G':
                a += 1;
                printf("6");
                break;
            case 'g':
                a += 1;
                printf("9");
                break;
            default:
                printf("%c",str[i]);
                break;
            }
    }
    return a;
}