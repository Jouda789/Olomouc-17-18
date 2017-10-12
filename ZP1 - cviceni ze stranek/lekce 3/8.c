#include<stdio.h>
#include<stdlib.h>

/* 8. Napište program, který rozhodne o známce na základě počtu bodů získaných v testu. */

int main() {
   int body;
   printf("Zadejte body: ");
   scanf("%d", &body);
   if ((body < 0) || (body > 100)) printf("chyba");
   else if ((body <= 100) && (body >= 90)) printf("A");
   else if ((body <= 89) && (body >= 80)) printf("B");
   else if ((body <= 79) && (body >= 76)) printf("C");
   else if ((body <= 75) && (body >= 71)) printf("D");
   else if ((body <= 70) && (body >= 60)) printf("E");
   else printf("F");
  }
