#include <stdio.h>
#include <stdlib.h>

/* 10. Naètìte ze vstupu tøíciferné èíslo a poté vypište jeho první a poslední èíslici. */

int main(){
    int i;
    scanf("%d", &i);
    printf("Prvni cislice je %d, posledni je %d.", i / 100, i % 10 );
}
