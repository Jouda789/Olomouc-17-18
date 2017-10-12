/* 3. Napište program, který spoèítá souèet všech dvouciferných lichých èísel. */

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
