/* 3. Napi�te program, kter� spo��t� sou�et v�ech dvoucifern�ch lich�ch ��sel. */

#include<stdio.h>
#include<stdlib.h>

int main() {
   int soucet, i;
    soucet = 0;
    for (i=11; i<100; i=i+2){
        soucet += i;
    }
    printf("%d", soucet);
}
