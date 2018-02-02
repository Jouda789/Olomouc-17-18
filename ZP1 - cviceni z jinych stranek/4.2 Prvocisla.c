#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define CONST 100

/* Napiste v jazyku C program, ktery vypise na obrazovku vsechna prvocisla mensi nez 100. */

int main()
{
    int i;
    int j;
    int k;
    for (i=1;i<CONST;i++){

        k = 0;

        if (i == 2){
            printf("%d ", i);
            continue;
        }
        if ((i == 1) || (i % 2 == 0)){
            continue;
        }
        else { for (j=3;j <= sqrt(i); j += 2){

            if ((i % j) == 0){ k=1; continue;}

              }
                 if (k == 0) { printf("%d ", i); }
             }

        }

}

/* ******************* NEBO **************** */

/* #include<stdio.h>
#include<stdlib.h>
#include<math.h> */

int prvocislo(int i){

    int a = sqrt(i);
    int j;
    if (i == 1){return 0;}
    if (i == 2){return 1;}
    if ((i % 2) == 0) { return 0; }
    for (j=3;j<=a;j += 2){
        if ((i % j) == 0) { return 0; break;}
    }
    return 1;
}

int main() {
    int i;
    for (i=1;i<100;i++){

        if (prvocislo(i)) printf("%d ", i);

    }
}
