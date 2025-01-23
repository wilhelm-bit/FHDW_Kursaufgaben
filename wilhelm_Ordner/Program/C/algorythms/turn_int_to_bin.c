#include <stdio.h>

//groesste zahl ist 1023
void binary_array(int *integer){
    int rest;
    int binary[32];
    int in=0;
    while(*integer!= 0){
        binary[in]=*integer % 2;
        *integer /=2;
        in++;
    }

    for(int j = in -1;j >= 0;j--){
        *integer= *integer*10+binary[j];
    }
}


int main() {
    int gg = 50;
    
    binary_array(&gg);


    printf("gg = %d\n",gg);   

}
