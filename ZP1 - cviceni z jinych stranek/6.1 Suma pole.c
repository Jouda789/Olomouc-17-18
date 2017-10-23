#include <stdio.h>
#include <stdlib.h>
#define VELIKOST 10

/* 6.1 Suma pole. */

double suma_pole(double pole[], int
pocet){
     int j;
     for(j=0;j<VELIKOST;j++)
        pocet += pole[j];
}


int main(){
    double pole[VELIKOST];
    int pocet=0;
    int i;
    for(i=0;i<VELIKOST;i++)
        pole[i] = i+1;
    printf("%.1lf", suma_pole(pole, pocet));    
}
