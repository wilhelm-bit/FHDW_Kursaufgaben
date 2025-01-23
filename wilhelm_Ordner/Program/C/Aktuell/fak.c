#include <stdio.h>
#include <stdlib.h>


double fakultat(int n){
    if(n == 0) return 1;
    
    else return  n * fakultat(n-1);
}

double formel(int n){
    if(n == 0) return 1;
    
    else return     1.0/fakultat(n)+ formel(n-1);
    
    


}
double fak(double gen){
    static int n = 0;
    n++;
    if(formel(n)-formel(n-1) < gen){
        double er= formel(n)-formel(n-1);
        printf("%lf ist der unterschied\n",er);
        return formel(n);
    }

    return fak(gen);
}








int main(){
    double gen = 0.001;

    printf("%lf",fak(gen));
    return 0;
}