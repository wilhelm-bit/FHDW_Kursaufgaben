#include <stdio.h>
#include <stdlib.h>

int str_length(const char *str) {    //Nummer 1
    int length = 0;
    
    while (*str != '\0') {   
        length++;
        str++;
    }
    return length;
}

void ptr_array(char* string, char** array, int count){  
    int len = str_length(string);
    
    for(int i = 0;i < count; i++){
        if(array[i][0]== '\0'){
            for(int j = 0; j < len; j++){
                array[i][j]= string[j];
            }
            array[i][len]= '\0';
            return;
        }
        else{
            continue;
        }


    }



}




int main(){


    int count = 3;
    char string1[]= "Die nasse Hose";
    char string2[]= "Das Auto ist schwer";
    char string3[]= "Der Baum ist sehr gross";
    char string4[]= "Der Baum ist sehr gross";
    char** stringarray = (char**)calloc(count, sizeof(char*));

    for(int i = 0; i < count; i++){
        stringarray[i]= (char*)calloc(60, sizeof(char));
    }

    ptr_array(string1,stringarray,count);
    ptr_array(string2,stringarray,count);
    ptr_array(string3,stringarray,count);
    
    
    printf("%s, %s, %s",stringarray[0], stringarray[1], stringarray[2]);
}