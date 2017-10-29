#include<stdio.h>
#include<stdlib.h>

/* 2. Napište program, kterı nalezne všechna ètyøciferná èísla, která jsou dìlitelná èíslem, 
které dostaneme jako sumu èísla tvoøeného první a druhou èíslicí 
a èísla tvoøeného tøetí a ètvrtou èíslicí. Napø. èíslo 3417 je dìlitelné èíslem 34 + 17. */

int JeSoucet(int cislo){
    int d = cislo % 100;
    int p = cislo / 100;
    int souc = p + d;
    if (cislo % souc == 0) return 1;
    else return 0;
}

int main(){
   int i;
   for(i=1000;i<10000;i++){       
       if(JeSoucet(i)) printf("%d ", i);              
   } 
}
