#include<stdio.h>

int ggT(int u, int v){

    int ggT1(int u1, int v1){
        if (u == v || u%v != 0) return ggT(u, v-1);
        else return v;
    }

    if (u < v) return ggT1(u, v);
    else return ggT(v, u-v);

}

float eZahlBerechner(float nachkomma){

    int fak(int n){
        if (n == 0) return 1;
        else return n * fak(n-1);
    }

    float formel(int n1){
        float result = 1.0 / fak(n1);
        return result;
    }

    float a = 0.0;
    float b = 0.0;
    int count = 0;


    while (b - a > nachkomma || b == 0){
        a = b;
        b += formel(count);
        count += 1;
    }

    return b;
}


int main(){

    printf("%f\n", ggT(6, 3));

    return 0;
}