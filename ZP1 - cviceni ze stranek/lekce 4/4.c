/* 4. Vypište všechna čtyřciferná čísla, jejichž součet číslic je dělitelný 7. */

#include<stdio.h>
#include<stdlib.h>

int main() {
   int i, a,b,c, pom;

    for (i=1000; i<10000; i++){
        pom = i;
        a = pom % 10;
        pom /= 10;
        b = pom % 10;
        pom /= 10;
        c = pom % 10;
        pom /= 10;
        if (((a+b+c+(pom % 10)) % 7) == 0){

        printf("%d ", i);}
    }
}
