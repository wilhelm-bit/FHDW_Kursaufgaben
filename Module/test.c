#include <stdio.h>

void tausche(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main() {
    char t[] = "Hallo";
    

    printf("%s", t);
    return 0;
}