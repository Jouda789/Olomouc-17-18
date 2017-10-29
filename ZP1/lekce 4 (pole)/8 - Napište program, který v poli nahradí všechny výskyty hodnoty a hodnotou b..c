#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 20

/* 8. Napište program, který v poli nahradí všechny výskyty hodnoty a hodnotou b (kde a
a b jsou hodnoty vhodného typu).  */

int main() {
   //srand(time(0));
   int i, a, b;
   int p[MAX];
   for(i=0;i<MAX;i++){
        p[i] = rand() % 100;
        printf("%d ", p[i]);
       
   }
   
   scanf("%d %d", &a, &b);
  
   for(i=0;i<MAX;i++){
        if (p[i] == a) p[i] = b;       
   }   
   printf("\n");    
   for(i=0;i<MAX;i++){
        printf("%d ", p[i]);
       
   }
} 
