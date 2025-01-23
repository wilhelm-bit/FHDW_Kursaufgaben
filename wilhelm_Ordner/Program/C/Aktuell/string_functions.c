#include <stdlib.h>



int str_length(char *str) {    //Nummer 1
    int length = 0;
    
    while (*str != '\0') {   
        length++;
        str++;
    }
    return length;
}
int count_character(char *str, char character){     //Nummer 2
    int count = 0;
    while(*str != '\0'){
        if(*str == character){
            count++;
        }
        str++;
    }

    return count;

}
int count_vowels(char *str){       //Nummer 3
    int count = 0;
    while(*str != '\0'){
        if(*str == 'a'|| *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u'){
            count++;
        }
        str++;
    }

    return count;

}
void change_char(char *str, char change, char input){     //Nummer 4
    while(*str != '\0'){
        int i = 0;
        if(*str == change){
            str[i] = input;
        }
        str++;
        i++;
    }
}
void upper_lower(char *str){    // Nummer 5
    
    while(*str != '\0'){
        if(*str <= 122  && *str >=97){
            *str -= 32;
        }
        else if(*str <= 90 && *str >=65){
            *str += 32;
        }
        str++;
    }
}

char* addstr(char *str_eins, char *str_zwei){  // Nummer 6
    int len1= str_length(str_eins);
    int len2= str_length(str_zwei);
    int n = len1+len2;
    char *pointer = (char*) malloc(n+1);
    if (pointer == NULL) {
        printf("Kein Platz\n");
        exit(1);
    }
    
    
    for(int i = 0; i < len1; i++){
        *(pointer + i) = *(str_eins + i);
    }
    for(int i = 0; i < len2; i++){
        *(pointer + len1 + i) = *(str_eins + i);
    }
    pointer[n] = '\0';

    return pointer;
    }

int check_for_str(char *sentence, char *word){  // Nummer 7
    int length_of_sentence = str_length(sentence);
    int length_of_word = str_length(word);
    int count = 0;
    int counts = 0;
    for(int i = 0; i <= length_of_sentence; i++){
        count = 0;
        for(int j = 0; j <= length_of_word-1; j++){
            if(sentence[i+j]==word[j]){
                count++;
                printf("%d %c\n",count,word[j]);
            }
            else{
                break;
            }
        }
        if(count == length_of_word){
        counts++ ;
        
        }
    }
    return counts;
}
char* compare_str(char *str1, char *str2, char *result){  //Nummer 8
    int len = str_length(str1);
    int j = 0;
    for (int i = 0; i < len; i++ ){
        
        if(*(str1+i)!= *(str2+i)){
            *(result+j) = *(str2+i);
            j++;
        }

    }
    *(result + j) = '\0';
    return result;
}
char* delete_numbers(char *string){        //Nummer9
    int len = str_length(string);
    char space = ' ';
    
    
    *(string+1)=*(string+1)/1;
    
    
    for(int i = 0; i < len; i++){    
        if(*(string+ i)<=57 && *(string+i) >=48){
            *(string+i)= space;

        }
    }
return string;
}
 int replace_in_str(char *search, char *replace, char *string){   //Nummer10
    
    int len_search = str_length(search);
    int len_replace = str_length(replace);
    int len_str = str_length(string);

    int len_str_end = str_length(string)-len_search+len_replace+1;



    char *result = (char*) malloc(len_str_end);
    if (result == NULL) {
        printf("Memory allocation failed!\n");
    }
    int position = -1;

    
    
    for(int i = 0; i <=len_str-len_search; i++){
        int match = 1;
        for(int j = 0; j< len_search;j++){
            
            if(*(string+i+j)!=*(search+j)){
                match = 0;
                break;
            }
        }
        if(match == 1){
                position = i;
                break;
            
        }
                
            
        
    
    }
    if(position == -1){
        printf("Der String ist nicht enthalten.");
        free(result);
        return 0;
    }
    int k = 0;
    
    for (int i = 0; i < position; i++) {
        *(result + k++) = *(string + i);
    }

    
    for (int i = 0; i < len_replace; i++) {
        *(result + k++) = *(replace + i);
    }

    
    for (int i = position + len_search; i < len_str; i++) {
        *(result + k++) = *(string + i);
    }
    *(result + k) = '\0';
    
    
    printf("%s",result);



}






char* str_rotation(char* string){  //Nummer 11
    int n = str_length(string);
    
    char *result= (char*) malloc((n+1)*sizeof(char));
    if (result == NULL) {
        printf("Fehler beim Allozieren von Speicher\n");
        return NULL;
    }
    
    
    for(int i = 0; i < n; i++){
        *(result+i)= *(string+1+i);
    }
    *(result+n-1)= *string;
    
    
    return result;


    
}
char* forward(char* string){  //Nummer 12.1
    int n = str_length(string);
    
    char *result= (char*) malloc((n+1)*sizeof(char));
    if (result == NULL) {
        printf("Fehler beim Allozieren von Speicher\n");
        return NULL;
    }
    
    int j = 0;
    for(int i = n-1; i >= 0; i--){
        *(result+j)= *(string+i);
        j++;
    }
    
    
    
    return result;


    
}
char* backward(char* string){  //Nummer 12.2
    int n = str_length(string);
    
    char *result= (char*) malloc((n+1)*sizeof(char));
    if (result == NULL) {
        printf("Fehler beim Allozieren von Speicher\n");
        return NULL;
    }
    
    int j = 0;
    for(int i = n-1; i >= 0; i--){
        *(result+i)= *(string+j);
        j++;
    }
    
    
    
    return result;


    
}


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

int compare_str_exactley(char *str1, char *str2){  //Eigene Funktion
    int len_str1 = str_length(str1);
    int len_str2 = str_length(str2);
    if (len_str1 != len_str2) return 1;
    int j = 0;
    
    while(*str1 != '\0'){
        if(*(str1)!= *(str2)){
            return 1;
        }
        str1++;
        str2++;
    }
    
    
    return 0;
}






