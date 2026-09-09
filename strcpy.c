#include "my_string.h"

char *strcpy(char *destination, const char *source){
    char *ptr = destination;
    while (*source != '\0')
    {
        *destination = *source;
        ++destination;
        ++source;
    }
    *destination = '\0';
    return ptr;
}