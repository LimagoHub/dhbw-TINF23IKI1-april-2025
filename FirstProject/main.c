#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double summe(int anzahl, double summand, ...){
    double result=0;
    double * s= &summand;
    for(int i = 0; i < anzahl; i++) {
        result += *s++;
    }
    return result;
}

void ausgabe(char * wort, ...) {
    char ** ptr = &wort;
    while(*ptr) {
        printf("%s\n", *ptr++);
    }
}


int sinnDesLebens() {
    return 42;
}

typedef int Herbert;


typedef int (*PtrType)();

typedef double(*Irgendeinname)(double, double);

double sum(double a, double b) {
    return a + b;
}

double sub( double a, double b) {
    return sum(a, -b);
}

int main(int argc, char ** argv, char **env) {

    Irgendeinname op[] = {sum, sub};

    for(int i = 0; i < 2; i ++) {
        printf("%lf\n", op[i](3,4));
    }


    PtrType x = sinnDesLebens;
    x();
}
