#include <stdio.h>
#include <stdlib.h>






typedef struct{
    char street;
    int used;
}address;



int str_length(const char *str) {    //Nummer 1
    int length = 0;
    
    while (*str != '\0') {   
        length++;
        str++;
    }
    return length;
}
void define_value_used(address address_array[], int count){
    for(int i = 0; i<count; i++){
        address_array[i].used = i+1;
    }
    
    

}



int main(){
    int count =100;
    char street[]= "Straße";
    address address_array[count];

    define_value_used(address_array,count);
    
    //change_value_at_index(address_array, count, street);


    printf("%d",address_array[44].used);

}
