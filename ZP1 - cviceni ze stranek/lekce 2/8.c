#include <stdio.h>
#include <stdlib.h>

/* 8. Napište program, který načte ze vstupu dvě čísla a vypíše jejich součet, rozdíl a součin. */

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("soucet je %d, rozdil je %d, soucin je %d", a+b,a-b,a * b);
}
