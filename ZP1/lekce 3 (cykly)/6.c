#include<stdio.h>
#include<stdlib.h>
#define MAX 500000000

/* 6. Napiste program, ktery aproximuje hodnotu cisla pi pomoci Gregory-Leibnizovy aproximace jako soucet prvnich 100 clenu sumy ... (pozor, suma dava ctvrtinu pi) */

int main() {
  int i, pomoc, index;
  float suma;
  suma = 0;
  pomoc = 0;
  for (i=0; i <= MAX; i++){
      if ((pomoc % 2) == 0) index = 1; else index = -1;
      pomoc++;
      suma += (float) index/(2*i + 1);      
  }   
  printf("%.16f", 4*suma);
}
