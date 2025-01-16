#include <stdio.h>


void addArrays(int ia[], int ib[], int ic[], int lenght){
        for(size_t i = 0; i < lenght; i++){
            ic[i] = ia[i] + ib[i];
        }
}

void printArray(int ia[], int lenght){
    for(size_t i = 0; i < lenght; i++){
        printf("%d\n", ia[i]);
    }
}

int main(){
    int ia[5] = {1, 2, 3, 4, 5};
    size_t ia_len = sizeof(ia) / sizeof(ia[0]);
    int ib[5] = {6, 7, 8, 9, 10};
    int ic[5];

    addArrays(ia, ib, ic, ia_len);
    printArray(ic, ia_len);
}