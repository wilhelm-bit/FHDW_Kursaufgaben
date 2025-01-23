#include <unistd.h>
#include <stdlib.h>
#include <string.h> 


int prim(int count){

    int a = 1;
    for(int i = 1; a = 1; i++){       
        for(int j = i-1; j >= -2 ;j--){          
            if(j == 1 || i == 1){    
                printf("%d\n", i);
                
                break;             
            }
            if(i%j == 0){                
                break;
            }
        }
        count = count-1;
        if(count == 0){
            break;
        }

    } 
}

void wiki_article(){

    char article[100];
    printf("welchen Wiki Artikel willst du ?\n");
    scanf("%s",&article);
    char wiki[100]=  " start https://de.wikipedia.org/wiki/";
    
    strcat(wiki, article);
    system(wiki);
} 
int sparrechner(){
    
    float savings;
    float percent;
    int years;
    float start;
    double money;
    double rendit;
    
    
    printf("Wie hoch ist dein Startkapital?\n");
    scanf("%f", &start);
    printf("Wie viel Euro willst du Monatlich anlegen?\n");
    scanf("%f", &savings);
    printf("Mit welcher jährlichen verzinsung rechnest du?\n");
    scanf("%f", &percent);
    printf("Wie viele Jahre willst du anlegen?\n");
    scanf("%d", &years);

    float month_percent = percent/12;
    float dez_percent = month_percent/100;

    for(int i = 1; i <= years; i++){
        if(i == 1){
            money = start;
        }
        for(int j = 1; j <= 12; j++){
            money = money + savings;
            rendit = money*dez_percent;
            money = money + rendit;
        }
        printf("%d:%30lf\n",i , money);
    }
}
void add_array(int ia[],int ib[],int ic[],int size){

    for(int i = 0; i < size;i++){
        ic[i] = ia[i]+ib[i];
        
    }

}











