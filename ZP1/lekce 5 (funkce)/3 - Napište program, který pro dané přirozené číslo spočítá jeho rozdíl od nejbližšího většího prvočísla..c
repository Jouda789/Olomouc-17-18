#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* 3. Napište program, který pro dané pøirozené èíslo spoèítá jeho rozdíl od nejbližšího vìtšího prvoèísla. */

/* neco je tu spatne... */ 

int JePr(int a){
    int j;
    int g = sqrt(j);
    if (a == 2) return 1;
    if ((a == 1) || (a % 2 == 0)) return 0;  
    for(j=3;j<=g;j++){
        if((a % j) == 0) {return 0; break;}       
    }
    return 1;   
}

int NajdiPr(int c){
    int i=c+1;
    
	while(JePr(i) == 0){		
		i++;
	}

    return i;    
}

int main(){
   int cislo, pr;
   scanf("%d", &cislo); 
   pr = NajdiPr(cislo);
   printf("%d", pr - cislo); 
}
