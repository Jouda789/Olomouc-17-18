#include<stdio.h>
#include<stdlib.h>
#define POCET 10

/* 7. Napi�te program, kter� ov���, zda-li jsou prvky v poli uspo��d�ny vzestupn�, sestupn� �i v�bec.  */

int main(){
    int a[POCET];
    int i;
    for(i=0;i<POCET;i++){
        scanf("%d", &a[i]);
    }
    
    int monot = 0;
    
    if (a[0]<=a[1]) monot = 1;
    else if (a[0]>=a[1]) monot = -1;
    
    for(i=2;i<POCET;i++){
        switch(monot){
            case 1:
                if (a[i-1]>a[i]) monot = 0;
                break;
            case -1:
                if (a[i-1]<a[i]) monot = 0;
                break;   
        }        
    }  
	 
    if (monot == 1) printf("Vzestupne.");
    else if (monot == -1) printf("Sestupne.");
    else printf("Vubec.");
}
