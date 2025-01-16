#include<stdio.h>

#define MAX_SIZE 100



int main(){
    int num = 100;

    int binary[MAX_SIZE];
    int current_size = 0;
    
    void append(int num){
        if (current_size <= MAX_SIZE){
            binary[current_size] = num;
            current_size++;
        } else {
            printf("Current number to big to fit array!\n");
        }
    }

    

    //loops til num = 1 and end of calculation
    while (num != 1){
        append(num % 2);
        num /= 2;
        if (num == 1){
            append(1);
        }
    }

    //add zeros to fit 4 stack
    while (current_size % 4 != 0){
        append(0);
    }

    for (int i = current_size-1; i >= 0; i--){
        printf("%d", binary[i]);
        if (i % 4 ==  0){
            printf(" ");
        }
    }


}