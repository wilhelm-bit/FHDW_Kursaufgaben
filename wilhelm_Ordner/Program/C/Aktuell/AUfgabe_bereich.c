#include <stdio.h>
#include <stdlib.h>


int laenge(const char *str) {    //Nummer 1
    int laenge = 0;
    
    while (*str != '\0') {   
        laenge++;
        str++;
    }
    return laenge;
}
char* addstr(char *str_eins, char *str_zwei){
    int len1= laenge(str_eins);
    int len2= laenge(str_zwei);
    int n = len1+len2;
    char *pointer = (char*) malloc(n+1);
    if (pointer == NULL) {
        printf("Kein Platz\n");
        exit(1);
    }
    
    
    for(int i = 0; i < len1; i++){
        pointer[i]= str_eins[i];
    }
    for(int i = 0; i < len2; i++){
        pointer[len1 + i]= str_zwei[i];
    }
    pointer[n] = '\0';

    return pointer;
    }


int main() {
    char string_eins[]= "Hallo ";
    char string_zwei[]= "Welt!";
    

    char *ptr = addstr(string_eins, string_zwei);
    printf("%s", ptr);

    free(ptr);
    return 0;
}
