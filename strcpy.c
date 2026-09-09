#include "my_string.h"

char *strcat(char *destination, const char *source){
    const char *ptr = destination;
    while (*destination != '\0')
    {
        *destination = *source;
    }
    return ptr;
}