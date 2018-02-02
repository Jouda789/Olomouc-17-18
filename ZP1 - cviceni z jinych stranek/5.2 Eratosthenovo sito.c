#include <stdio.h>
#include <math.h>
#define N 100

/* 5.2 Eratosthenovo sito. Zkopirovano z www.itnetwork.cz. */

int main()
{
  int cisla[N], i, j;
  for (i = 2; i < N; i++)
      cisla[i] = 1; // Neni prvocislo

  for (i = 2; i < sqrt(N); i++) {
      if (cisla[i] == 0) continue;
      for(j = 2*i; j < N; j += i)
          cisla[j] = 0;
  }

  printf("Prvocisla:\n");

  for (i = 2; i < N; i++) {
      if (cisla[i] == 1)
         printf("%d ", i);
  }
}
