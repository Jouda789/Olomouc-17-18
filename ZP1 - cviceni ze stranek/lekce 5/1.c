#include<stdio.h>
#include<stdlib.h>
#define MAX 15

/* 1. Napi�te program, kter� vypo�te pr�m�r pole desetinn�ch ��sel. */

int main() {
    float a[MAX];
    int i;
    float soucet, vysledek;
    for (i=0; i<MAX;i++){
        a[i] = (float) rand() / 10000000000;
        soucet += a[i];
    }
    vysledek = (float) soucet / MAX;
    printf("%f", vysledek);           
}
