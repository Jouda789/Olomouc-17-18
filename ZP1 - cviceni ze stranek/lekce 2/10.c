#include <stdio.h>
#include <stdlib.h>

/* 10. Načtěte ze vstupu tříciferné číslo a poté vypište jeho první a poslední číslici. */

int main(){
    int i;
    scanf("%d", &i);
    printf("Prvni cislice je %d, posledni je %d.", i / 100, i % 10 );
}
