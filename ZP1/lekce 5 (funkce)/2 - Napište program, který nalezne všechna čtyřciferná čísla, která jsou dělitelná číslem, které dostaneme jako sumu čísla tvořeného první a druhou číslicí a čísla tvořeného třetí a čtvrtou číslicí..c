#include<stdio.h>
#include<stdlib.h>

/* 2. Napi�te program, kter� nalezne v�echna �ty�cifern� ��sla, kter� jsou d�liteln� ��slem, 
kter� dostaneme jako sumu ��sla tvo�en�ho prvn� a druhou ��slic� 
a ��sla tvo�en�ho t�et� a �tvrtou ��slic�. Nap�. ��slo 3417 je d�liteln� ��slem 34 + 17. */

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
