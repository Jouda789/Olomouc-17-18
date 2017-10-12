#include<stdio.h>
#include<stdlib.h>

/* Napiste v jazyku C program, ktery vykresli pomoci znaku ”*” na obrazovku ctverec zadane velikosti. */

int main()
{
   int velikost;
   printf("Zadejte velikost ctverce: \n");
   scanf("%d", &velikost);

   int i, j;
   for (i=1;i<=velikost;i++){
       if ((i==1) || (i==velikost)){

           for(j=1;j<=velikost;j++){
               printf("*");
           }
       }
       else {
          printf("*");
          for(j=2;j<velikost;j++) {
              printf(" ");
          }
          printf("*");
       }
       printf("\n");
   }
}
