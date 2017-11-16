#include <stdio.h>
#include <math.h>

/* 4. Napište program, který pro dané přirozené číslo n vypíše všechna prvočísla menší než n, jejichž součet číslic je také prvočíslem. */

int prime(int i)
{
    int a = sqrt(i);
    int j;
    if (i == 1) return 0;
    if (i == 2) return 1;
    if ((i % 2) == 0) return 0;
    for (j=3;j<=a;j++){
        if ((i % j) == 0)  return 0;  
    }      
    return 1;
}

int soucet_cislic(int n)
{
    int soucet = 0;
    while(n)
    {
        soucet += n%10;
        n /= 10;            
    }
   return soucet;        
}

int main(){
    int n, i;
    scanf("%d", &n);
    for (i=2;i<=n;i++)
    if (prime(i) && (prime(soucet_cislic(i)))) printf("%d ", i);
}
