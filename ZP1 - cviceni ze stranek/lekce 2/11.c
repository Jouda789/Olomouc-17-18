#include <stdio.h>
#include <stdlib.h>

/* 11. Napi�te program, kter� na�te datum narozen� ve tvaru DDMMYYYY jako ��slo, a
vypi�te jej jako datum. Nap�. po na�ten� ��sla 13122002 vypi�te
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
