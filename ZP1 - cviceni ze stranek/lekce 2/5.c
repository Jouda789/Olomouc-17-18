#include <stdio.h>
#include <stdlib.h>

/* 5. Napi�te program, kter� vypo�te hodnotu matematick�ho v�razu 3/2 + 12 - (5^3 -2)/6 a vyp�e ji na obrazovku. */

int main(){

  float cislo = 3/2 + 12 - (5*5*5 - 2)/6;

  printf("%f", cislo);

  return 0;
}
