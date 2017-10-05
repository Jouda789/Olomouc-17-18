#include <stdio.h>
#include <stdlib.h>

/* 8. Napište program, který naète ze vstupu dvì èísla a vypíše jejich souèet, rozdíl a souèin. */

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    printf("soucet je %d, rozdil je %d, soucin je %d", a+b,a-b,a * b);
}
