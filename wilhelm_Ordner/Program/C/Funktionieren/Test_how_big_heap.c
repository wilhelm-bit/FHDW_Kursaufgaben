#include <stdio.h>
#include <stdlib.h>

int main() {
    int* count = NULL;  // Zeiger auf int
    int a = 1;  // Startwert für die Speichergröße, die wir anfordern
    int maxIterations = 1000;  // Maximalanzahl der Iterationen zur Vermeidung einer Endlosschleife

    // Schleife zur kontinuierlichen Speicherzuweisung
    for (int i = 0; 1 == 1; i++) {
        // Zuweisen von 'a' Bytes im Heap für jedes neue 'count'
        count = (int*)malloc(a * sizeof(int));  // Zuweisen von 'a' ints
        if (count == NULL) {
            // Wenn malloc fehlschlägt (z.B. keine ausreichenden Speicherressourcen)
            printf("Speicherzuweisung fehlgeschlagen!\n");
            a = a * 4;
            printf("der heap ist %d bytes gross", a);
            return 1;  // Beenden des Programms
        }
        
        // Setze den Wert von '14' in den Speicherbereich
        count[i] = 4;

        // Erhöhe 'a' für die nächste Iteration, um mehr Speicher zu verlangen
        a++;
    }
    return 0;
}