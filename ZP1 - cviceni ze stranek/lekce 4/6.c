#include<stdio.h>
#include<stdlib.h>
#define MAX 500

/* 6. Napi�te program, kter� aproximuje hodnotu ��sla p� pomoc� Gregory-Leibnizovy aproximace jako sou�et prvn�ch 100 �len� sumy (viz wiki). */

/*************** POZOR, N�CO JE TU �PATN�, vypisuje to 1,00000 m�sto p� ***********************************/

int main() {
  int i, pomoc, index;
  double suma;
  suma = 0;
  pomoc = 0;
  for (i=0; i <= MAX; i++){
  	if ((pomoc % 2) == 0) {index = 1;} else {index = -1;}
  	pomoc++;
  	suma = suma + (index  / (2*i + 1));  	
  }   
  printf("%f", suma);
}
