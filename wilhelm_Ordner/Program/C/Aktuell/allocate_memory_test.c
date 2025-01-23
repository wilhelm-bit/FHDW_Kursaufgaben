#include <stdio.h>
#include "string_functions.c"
#include <stdlib.h>





int main(){


    char string[]= "Der Baum ist sehr gross";
    int len = str_length(string);
    char* ptr = (char*)malloc(sizeof(char)* (len+1));


    for(int i = 0; i < len ; i++){
        *(ptr+i)= *(string+i);
    }   
    *(ptr+len)= '\0';
    printf("%s",string);


    free(ptr);
}
