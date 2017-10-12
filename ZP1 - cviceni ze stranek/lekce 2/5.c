#include <stdio.h>
#include <stdlib.h>

/* 5. Napište program, který vypočte hodnotu matematického výrazu 3/2 + 12 - (5^3 -2)/6 a vypíše ji na obrazovku. */

int main(){

  float cislo = 3/2 + 12 - (5*5*5 - 2)/6;

  printf("%f", cislo);

  return 0;
}
