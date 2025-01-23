#include <stdio.h>

int main(){
    int rot = 1;
    int num = 11;
    int eins = 1;
    int null = 0;
    
    for(int i = 1; i <= num;i++){
        
        
        for(int j = 1; j <= num; j++){
            printf("%2d",null);
                if(j == num){
                    printf("\n");

                }
        }
    }
    
    
    
    
    
    
    printf("\n\n\n");
    for(int i = 1; i <= num;i++){
        
        
        for(int j = 1; j <= num; j++){
            if(i==j){
                printf(" %d",eins);
            }
            else{
                printf("%2d",null);
            } 
            
            if(j == num){
                printf("\n");

            }
        
        }  
    }  
    
    
    
    
    
    
    
    
    printf("\n\n\n");
    int zahl = num;
    for(int i = 1; i <= num;i++){
        
        
        for(int j = 1; j <= num; j++){
            
            if(j == zahl){
                printf(" %d",eins);
                zahl = zahl -1;
            }
            else{
                printf("%2d",null);
            } 
            
            if(j == num){
                printf("\n");

            }
        
        }  
    }  
    zahl = 0;

    printf("\n\n\n");
    
    for(int i = 1; i <= num;i++){
        
        for(int j = 1; j <= num; j++){
            
            if((j == num -i+1) || (i == j)){
                printf(" %d",eins);
               
                
            }
            
            else{
                printf("%2d",null);
            } 
            
            if(j == num){
                printf("\n");
                

            }
        
        }  
    }
    
    printf("\n\n\n");
    int stars = 1;
    int a =2;
    
    for(int i = 1; i <2 * num;i++){

        if(i < num){
            for(int p = i-1; p < num-1;p++){
                printf(" ");
            }
            
        }
        if(i> num){
            for(int p = i-num; p > 0 ;p-- ){
                printf(" ");
            }
        }
        
        
        
        
        
        
        
        for(int j = 0; j <= stars-1; j++){
            if(i < num){
                
                printf("%d",null);
            }
            else if(i >= num){
                a = -2;
                printf("%d",null);
            }
        }
        
            stars = stars + a;
        
        printf("\n");
    }   
}
        
        
        
        
        
        
        
        
        

    
