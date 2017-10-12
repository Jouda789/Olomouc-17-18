#include<stdio.h>
#include<stdlib.h>
#define MAX 500

/* 6. Napište program, který aproximuje hodnotu čísla pí pomocí Gregory-Leibnizovy aproximace jako součet prvních 100 členů sumy (viz wiki). */

/*************** POZOR, NĚCO JE TU ŠPATNĚ, vypisuje to 1,00000 místo pí ***********************************/

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
