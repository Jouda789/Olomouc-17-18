#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define VELIKOST 20
#define DELITEL 100000000

int main() {
   int a[VELIKOST];
   int i;
   int soucet = 0;
    for (i=0;i<=VELIKOST;i++){
        a[i] = rand() / DELITEL;
        soucet += a[i];
        printf("a[%d]=%d, ", i, a[i]);
    }

    printf("Prumer pole je %d", soucet / VELIKOST);
}
