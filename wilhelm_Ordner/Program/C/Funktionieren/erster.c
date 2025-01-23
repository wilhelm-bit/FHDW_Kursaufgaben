#include <stdio.h>
#include "string_functions.c"





void  func(char str[],char arr[], char nach[]){
    
    int i = 0;
    int j = 0;
    while(str[i] != '\0'){
        nach[i]=str[i];
        i++;
        
    }
    while(arr[j] != '\0'){
        nach[i]=arr[j];
        i++;
        j++;
    }
    nach[i] = '\0';

    printf("%s",nach);


    
}











int main(){

    char str[]= "hallo";
    char arr[]= " welt";
    char nach[100];
    

    
    printf("%s\n",forward(str));
    upper_lower(str);
    printf("%s",str);

}