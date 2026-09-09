#include "my_string.h"

char *strcat(char *destination, const char *source){
    char *ptr = destination;
    while(*destination != 0){
        destination+=1;
    }

    while(*source != 0){
        *destination = *source;
        ++destination;
        ++source;
    }

    *destination = '\0';
    return ptr;
}