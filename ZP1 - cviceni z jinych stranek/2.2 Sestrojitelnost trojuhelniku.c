#include<stdio.h>

/* Napiste v jazyku C program, ktery overi, jestli lze sestrojit trojuhlenik se zadanymi velikostmi stran.
Vstupem programu jsou velikosti stran trojuhelniku. */

int main()
{
    int a,b,c;
    printf("Zadejte stranu a: \n");
    scanf("%d", &a);
    printf("Zadejte stranu b: \n");
    scanf("%d", &b);
    printf("Zadejte stranu c: \n");
    scanf("%d", &c);
    if ( (a>(b+c)) || (b>(a+c)) || (c>(a+b)) ){

        printf("Nelze sestrojit.");}

    else {printf("Lze sestrojit.");}
}
