#include <stdio.h>
#include "string_functions.c"
#include <stdlib.h>






int main() {
    char search []= "baum";
    char replace []= "busch";
    char string [] = "ggggbaumggggbaum";
    
    
    replace_in_str(search, replace, string);
    
    
    return 0;
}












