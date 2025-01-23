#include <stdio.h>


void add_array(int ia[],int ib[],int ic[],int size){

    for(int i = 0; i < size;i++){
        ic[i] = ia[i]+ib[i];
        
    }

}
void printarray(int ic[], int size){
    for(int i = 0; i < size; i++){
        printf("%d\n",ic[i]);
    }

}




int main(){

    int ia[5] = {0,1,2,3,4};
    int ib[5] = {5,6,7,8,9};
    int ic[5];

    int size = sizeof(ia)/sizeof(ia[0]);

    add_array(ia,ib,ic,size);
    printarray(ic, size);




}