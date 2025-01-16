#include<stdio.h>
#include<stdlib.h>



int f(int x){
    if (x==0) return 0;
    else return x + f(x-1);
}



int main(){

    int e = f(4);

    printf("%d", e);

    return 0;
}