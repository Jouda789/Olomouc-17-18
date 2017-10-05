#include <stdio.h>
#include <stdlib.h>

/* 11. Napište program, kterı naète datum narození ve tvaru DDMMYYYY jako èíslo, a
vypište jej jako datum. Napø. po naètení èísla 13122002 vypište
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
