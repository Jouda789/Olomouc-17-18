#include<stdio.h>
#include<stdlib.h>

/* 7. Napi�te program, kter� pro p�irozen� ��slo vyp�e jeho rozklad na prvo��sla. */

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
