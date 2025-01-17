#include <stdio.h>

int strLen(char st[]) {
    int len = 0;

    while (st[len]) {
        len++;
    }

    return len;
}

int strVocals(char st[]) {
    int vocalCounter = 0;

    for (int i = 0; i < strLen(st); i++) {
        switch (st[i]) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            vocalCounter++;
            break;
        default:
            break;
        }
    }
    return vocalCounter;
}

void strCopy(char from[], char to[]) {
    
    int i = 0;

    while(from[i]) {

        to[i] = from[i];

        i++;
    }

    to[i] = '\n';

}

void strConcat(char st1[], char st2[], char to[]) {

    int i = 0;
    int j = 0;

    while (st1[i]) {
        to[i] = st1[i];
        i++;
    }

    while (st2[j]) {
        to[i] = st2[j];
        i++; j++;
    }

    to[i] = '\0';

    printf("%s", to);

}

void strRevert(char st[]) {
    int front = 0;
    int back = strLen(st) - 1;
    char tmp;

    while (front < back) {
        tmp = st[front];
        st[front] = st[back];
        st[back] = tmp;

        front++; back--;
    }
}

int main() {
    char st[100] = "Hallo";
    char st1[100] = " Welt";
    char st2[100];
    

    strRevert(st);
    printf(st);
}