#include <stdio.h>
#include <stdlib.h>

/* 10. Na�t�te ze vstupu t��cifern� ��slo a pot� vypi�te jeho prvn� a posledn� ��slici. */

int main(){
    int i;
    scanf("%d", &i);
    printf("Prvni cislice je %d, posledni je %d.", i / 100, i % 10 );
}
