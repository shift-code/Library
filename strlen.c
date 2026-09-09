#include "my_string.h";
#include <stdio.h>;

int strlen(char *string){
if(string == NULL){
    return -1;
}
int count  = 0;
while(*string != 0){
    ++count;
    string += 1;
}
return count;
}