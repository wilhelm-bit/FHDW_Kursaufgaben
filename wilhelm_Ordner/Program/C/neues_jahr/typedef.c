#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[20];
    int alter;



} benutzer;

int main(){
    
    benutzer user1 = {"wilhelm",20};
    printf("%d", user1.alter);


}