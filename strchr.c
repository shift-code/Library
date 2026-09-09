#include "my_string.h"
#include <stdio.h>

char* strchr( char* str, int ch ){
    while(*str != '\0'){
        if(*str == (char)ch){
            return (char *)str;
        }
        ++str;
    }

    if((char)ch == '\0'){
        return (char *)str;
    }
    return NULL;
}