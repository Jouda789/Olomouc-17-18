/* 3. Napište program, který spočítá součet všech dvouciferných lichých čísel. */

#include<stdio.h>
#include<stdlib.h>

int main() {
   int soucet, i;
    soucet = 0;
    for (i=11; i<100; i=i+2){
        soucet += i;
    }
    printf("%d", soucet);
}
