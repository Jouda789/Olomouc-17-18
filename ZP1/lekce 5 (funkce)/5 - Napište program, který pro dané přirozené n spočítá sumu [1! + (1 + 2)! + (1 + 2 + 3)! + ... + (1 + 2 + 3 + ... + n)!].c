#include<stdio.h>
#include<stdlib.h>

/* 5. Napi�te program, kter� pro dan� p�irozen� n spo��t� sumu 
[1! + (1 + 2)! + (1 + 2 + 3)! + ... + (1 + 2 + 3 + ... + n)!] */

int fact(int a){
    if(a==1) return 1;
    else return a * fact(a - 1);   
}

int main(){
   int n; 
   scanf("%d", &n);
   int i, suma=0, pom, j;
   for(i=1;i<=n;i++){
       pom = 0;
       for(j=1;j<=i;j++){
           pom += j;                  
       }
       suma += fact(pom);
   } 
    
  printf("%d", suma);  
}
