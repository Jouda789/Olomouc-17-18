#include<stdio.h>
#include<stdlib.h>
#define VELIKOST 10

/* 6. Napi�te program, kter� se�te v�echna lich� ��sla z pole. */

int main(){
	int a[VELIKOST] = {1,2,3,4,5,6,7,8,9,10};
	int i, suma;
	suma = 0;
	for(i=0;i<VELIKOST;i++){
		if ((a[i] % 2)==1) suma += a[i];
	}
	printf("%d", suma);	
}
