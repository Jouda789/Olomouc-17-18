#include <stdio.h>

//Spocte rozdil mezi maximem a minimem v poli.

int spocti(int p[], int velikost){
  int i;
  int max = p[0];
  int min = p[0];
  for(i=0;i<velikost;i++){
    if (p[i] < min) min = p[i];
    if (p[i] > max) max = p[i];
  }

  return max-min;  
}

int main()
{
 
  int pole[11] = {3,2,7,4,10,23,50,1,2,6,41};
  printf("%d", spocti(pole, 11));
  
}
