#include <stdio.h>
#include <stdlib.h>

/* 11. Napiste program, který nacte datum narozeni ve tvaru DDMMYYYY jako cislo, a
vypiste jej jako datum. Napr. po nacteni cisla 13122002 vypiste
13. 12. 2002 */

int main(){
    int datum;
    int den, mesic;
    scanf("%d", &datum);
    den = datum / 1000000;
    datum = datum - den * 1000000;
    mesic = datum / 10000;
    datum = datum - mesic * 10000;
    printf("%d. %d. %d", den, mesic, datum);
}
