#include<stdio.h>

#define RESET   "\033[0m"
#define RED     "\033[31m"

int Aufg1(int n){

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("x");
        }
        printf("\n");
    }

    return 0;
}

int Aufg2(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (j == i){
                printf("o");
            } else{
                printf("x");
            }
        }
        printf("\n");
    }

    return 0;
}

int Aufg3(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (n-i - 1 == j){
                printf("o");
            } else{
                printf("x");
            }
        }
        printf("\n");
    }

    return 0;
}

int Aufg4(int n){
    int save = 0;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if ((i*n+j)%2 == 1){
                printf("x");
            } else if (save == 0){
                printf("A");
                save = 1;
            } else {
                printf("B");
                save = 0;
            }
        }
        printf("\n");
    }

    return 0;
}

int Aufg5(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1; j++){
            printf(" ");
        }
        for (int j = 0; j < (i*2)+1; j++){
            printf("x");
        }
        printf("\n");
    }
    for (int i = n-2; i >= 0; i--){
        for (int j = 0; j < n-i-1; j++){
            printf(" ");
        }
        for (int j = 0; j < (i*2) + 1; j++){
            printf("x");
        }
        printf("\n");
    }
}

int main(){
    Aufg1(5);
    Aufg2(5);
    Aufg3(5);
    Aufg4(5);
    Aufg5(5);
}
