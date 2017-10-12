#include<stdio.h>
#include<stdlib.h>
#define MAX 500

/* 6. Napište program, který aproximuje hodnotu èísla pí pomocí Gregory-Leibnizovy aproximace jako souèet prvních 100 èlenù sumy (viz wiki). */

/*************** POZOR, NÌCO JE TU ŠPATNÌ, vypisuje to 1,00000 místo pí ***********************************/

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
