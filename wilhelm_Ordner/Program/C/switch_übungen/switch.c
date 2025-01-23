#include <stdio.h>
#include <stdlib.h>




int main(){

    int number;

    printf("Welchen Wochentag aus der Woche willst du? Gib mir eine Zahl: ");
    scanf("%d", &number);


    switch(number){
        case 1:
            printf("Es ist Montag.");
            break;
        case 2:
            printf("Es ist Dienstag.");
            break;
        case 3:
            printf("Es ist Mittwoch.");
            break;
        case 4:
            printf("Es ist Donnerstag.");
            break;
        case 5:
            printf("Es ist Freitag.");
            break;
        case 6:
            printf("Es ist Samstag.");
            break;
        case 7:
            printf("Es ist Sonntag.");
            break;
        default :
            printf("Diese Zahl passt nicht.");
            break;






    }







}