#include <stdio.h>
#include <stdlib.h>


//compared to structs unions share the same memory location

union example {

    int a;
    char b;

};

struct example_two{
    int a;
    char b;

};

int main(){
    union example user1 ={12,'d'};
    struct example_two user2 = {20,'s'};



    
    printf("%d\n",&user1.a);
    printf("%d\n",&user1.b);
    printf("%d\n",&user2.a);
    printf("%d\n",&user2.b);
}