/* 1. Napište program, který načte celá čísla a a b a poté
a) vypíše prvních a násobků čísla b,
b) vypočítá a-tou mocninu čísla b,
c) vypočítá a-té Fibonacciho číslo,
d) určí, kolik číslic má číslo a,
e) sečte všechna celá čísla větší než a a menší než b. */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
   int a, b, i, b2, a2, fib1, fib2, fib3, fibPom, cifry, soucet;
   scanf("%d %d", &a, &b);
    b2 = b;
    a2 = a;
   for (i=1; i<=a; i++){
     printf("%d ", i*b);
   }

   printf("\n");
    for (i=1; i<a; i++){
        b2 *= b;
    }
    printf("%d", b2);
    printf("\n");

    fib1 = 1;
    fib2 = 1;

    for(i=2; i<a; i++){
       fib3 = fib1 + fib2;
       fib1 = fib2;
       fib2 = fib3;

    }
        printf("%d", fib3);
        printf("\n");

    cifry = 0;
   while (a2>0){
    cifry++;
    a2 /= 10;
   }

     printf("%d", cifry);
     printf("\n");

    soucet = 0;

    for(i=a+1;i<b;i++){
        soucet += i;
    }
   printf("%d", soucet);

}
