#include <stdio.h>

#include <stdlib.h>



typedef struct{
    int count;
    
} counter;



void* HURRA(char* string, counter *a,counter *e,counter *i,counter *o,counter *u){  //Nummer 14
    
    
    while(*string != '\0'){
        if(*string == 'a' || *string == 'A'){
            a ->count += 1;
            if(a->count%10 == 0){
                printf("HURRA_a\n");
            }
        }
        else if(*string =='u'|| *string == 'U'){
            u ->count += 1;
            if(u->count%10 == 0){
                printf("HURRA_u\n");
            }
        }
        else if(*string =='o'|| *string == 'O'){
            o ->count += 1;
            if(o->count%10 == 0){
                printf("HURRA_o\n");
            }
        }
        else if(*string =='i'|| *string == 'I'){
            i ->count += 1;
            if(i->count%10 == 0){
                printf("HURRA_i\n");
            }
        }
        else if(*string =='e'|| *string == 'E'){
            e ->count += 1;
            if(e->count%10 == 0){
                printf("HURRA_e\n");
            }
        }
        string++;
    }

    
    
    return 0;


    
}









int main(){
    counter a = {0};
    counter e = {0};
    counter i = {0};
    counter o = {0};
    counter u = {0};




    char string_1[] = "Der Himmel war am Abend in ein wunderschönes Orange getaucht. Die Vögel flogen in Richtung Westen, während die Sonne langsam hinter den Bergen verschwand.";
    char string_2[] = "Die Straßen waren ruhig, und der Duft von frischem Brot lag in der Luft. Ich ging langsam durch die Stadt und genoss die friedliche Atmosphäre.";
    char string_3[] = "Im Garten blühten die ersten Blumen des Frühlings. Ihre Farben strahlten in der warmen Sonne, die den Tag erhellte.";
    char string_4[] = "Der Regen hatte die Welt in eine sanfte Stille gehüllt. Pfützen bildeten sich auf den Straßen und spiegelten die grauen Wolken wider";


    HURRA(string_1, &a,&e,&i,&o,&u);
   
    HURRA(string_2, &a,&e,&i,&o,&u);
    
    HURRA(string_3, &a,&e,&i,&o,&u);
    
    HURRA(string_4, &a,&e,&i,&o,&u);
   


}

