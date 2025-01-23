#include <stdio.h>
#include "functions.c"

 


int main(){
   int list[] = {6,3,8,23,2222222,5,1,234,2424,2424};
   int size = sizeof(list)/sizeof(list[0]);
   
   
   
   for(int i = 1; i < size; i++){
      for(int j = 0; j < size-i; j++){
         if(list[j]>list[j+1]){
            int temp = list[j];
            list[j] = list[j+1];
            list[j+1] = temp;
            
            

         }
         
      }
      
   }
   
   for(int k = 0; k <= size-1;k++){
      printf("%d\n", list[k]);

   }
   
   
   return 0;
}
