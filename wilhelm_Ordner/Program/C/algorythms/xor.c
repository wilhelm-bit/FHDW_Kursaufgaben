#include <stdio.h>


int main(){
    int a = 12;
    int b = 27;


    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
    printf("a = %d\n",a);
    printf("b = %d",b);


}