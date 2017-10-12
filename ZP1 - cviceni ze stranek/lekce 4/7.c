#include<stdio.h>
#include<stdlib.h>

/* 7. Napište program, který pro pøirozené èíslo vypíše jeho rozklad na prvoèísla. */

int main() {
 int cislo, i = 2, pomoc;
 printf("Zadejte prirozene cislo, reknu vam jeho faktorizaci: ");
 scanf("%d", &cislo);
 pomoc = 0;
 while (i<=cislo){
 	if ((cislo % i) == 0) {
 	 if (pomoc > 0)	printf("*");
	 printf("%d", i);
	 cislo = cislo / i;
	 pomoc++;}
 	else i++;
 	
 }
}
