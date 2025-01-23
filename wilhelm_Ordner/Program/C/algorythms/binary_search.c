#include <stdio.h>
#include <stdlib.h>


int binary_search(int* array, int k, int size){  //returns the index of a value in a list
    int first = 0;
    int last = size-1;
    int result = -1;
    
    for(int i = 0; i < size; i++){
        int mid = first+ ((last-first)/2);
        if(k == array[mid]){
            result = mid;
            last = mid -1;
        }
        else if(k < array[mid]){
            last = mid -1;
        }
        else if(k > array[mid]){
            first = mid +1;
        }
    }

    return result;

}

    


int main(){

    int k = 9;
    int array[] = {7,8,9,9,9,9,10};
    int size = sizeof(array)/sizeof(array[0]);


    printf("%d", binary_search(array,k,size));  
}


