#include <stdio.h>
#include <stdlib.h>
#define POCET 8

/* 5.1 Obraceni pole. */

int main(){
    int pole[POCET];
    int i;
    for (i=0;i<POCET;i++){
        scanf("%d ", &pole[i]);
    }
    printf("Puvodni hodnoty: ");
    for (i=0;i<POCET;i++){
        printf("%d", pole[i]);
        if (i != (POCET-1)) printf(", ");
    }
    int pom;
    for (i=0;i<(POCET/2);i++){
        pom = pole[i]; 
        pole[i] = pole[POCET-i-1];
        pole[POCET-i-1] = pom;        
    }
    printf("\nNove hodnoty: ");
    for (i=0;i<POCET;i++){
        printf("%d", pole[i]);
        if (i != (POCET-1)) printf(", ");
    }   
}
