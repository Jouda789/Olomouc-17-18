#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* 4. Načtěte ze vstupu souřadnice bodu v na euklidovské ploše. Vypište, do kterého kvadrantu bod patří (nebo na které ose leží). */

int main() {
   int x,y;
   scanf("%d %d", &x, &y);
   printf("Bod lezi ");
   if (x>0){
       if (y>0){
           printf("v 1. ");
       }
       else if (y < 0){
           printf("v 4. ");
       }
       else {
           printf("na prave poloose x.");
           return 0;
       }
   } else if (x < 0){
       if (y>0){
           printf("v 2. ");
       }
       else if (y < 0){
           printf("v 3. ");
       }
       else {
           printf("na leve poloose x.");
           return 0;
       }

   } else {printf("na ose y."); return 0;}
  printf("kvadrantu.");
}
