#include <stdio.h>

void printLine(int starsToBePrinted, int spaceNeeded) {
    for (int k = 0; k < (spaceNeeded - starsToBePrinted) / 2; k++) {
            printf(" ");
    }
    for (int k = 0; k < starsToBePrinted; k++) {
        printf("*");
    }
    printf("\n");
}

void printRombus(int n) {

    int spaceNeeded;

    spaceNeeded = 1 + ((n-1) * 2);

    int starsToBePrinted;



    //print stars in ascending order
    for (int i = 0; i < n; i++) {
        starsToBePrinted = (i * 2) + 1;
        printLine(starsToBePrinted, spaceNeeded);
    }

    for (int i = n - 2; i >= 0; i--) {
        starsToBePrinted = (i * 2) + 1;
        printLine(starsToBePrinted, spaceNeeded);
    }
}


int main() {
    printRombus(300);
    return 0;
}