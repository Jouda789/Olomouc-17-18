#include <stdio.h>
#include <stdlib.h>

/* 5. Nactete cisla a a b. Vypiste vsechna cisla vetsi nez a a mensi nez b, ktera jsou tzv. palindromy. */

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int i, delka, j, pom, pom2;  
    char str[30];
    for (i=a+1;i<b;i++){
       delka = 0;
       pom = i;
       pom2 = 1;
       while (pom > 0){
         pom /= 10;  
         delka++;  
       }
       sprintf(str, "%d", i);
       for (j=0;j<=(delka-2)/2;j++){
           if (str[j] != str[delka-j-1])
            pom2=0;   
      }        
      if (pom2 == 1) printf("%d ", i);  
    }
}
