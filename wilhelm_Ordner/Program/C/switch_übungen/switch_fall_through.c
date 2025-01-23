#include <stdio.h>
#include <stdlib.h>



int main(){
    int grade;
    printf("Welche Note hast du: ");
    scanf("%d", &grade);




    switch(grade){
        case 1:
            
        case 2:
            printf("Sehr gut");
            break;
        case 3:
            printf("Gut");
            break;
        case 4:
            printf("Befriedigend");
            break;
        case 5:

        case 6:
            printf("Nicht bestanden");
            break;
        default:
            printf("Das ist keine richtige Note");


    }

}