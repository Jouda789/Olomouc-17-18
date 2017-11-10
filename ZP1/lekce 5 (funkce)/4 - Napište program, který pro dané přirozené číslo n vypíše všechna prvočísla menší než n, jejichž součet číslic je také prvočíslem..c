#include <stdio.h>
#include <math.h>

/* 4. Napište program, který pro dané pøirozené èíslo n vypíše všechna prvoèísla menší než n, jejichž souèet èíslic je také prvoèíslem. */
/* nekde je chyba */

int JePrvocislo(int i){
    
    int a = sqrt(i);
    int j;
    if (i == 1) return 0;
    if (i == 2) return 1;
    if ((i % 2) == 0) return 0;
    for (j=3;j<=a;j++){
        if ((i % j) == 0)  return 0; 
        else return 1; 
    }    
}

int SoucetJePrvocislo(int cislo){
    
    int pom = cislo, pocetCifer = 0;
    int i, soucet = 0;
    while (pom > 0) {
        pocetCifer++;
        pom /= 10;
    }
    
    for(i=0;i<pocetCifer;i++){
        pom = cislo % 10;
        soucet += pom;
        cislo /= 10;       
    }
    
    if (JePrvocislo(soucet)) return 1;
    else return 0; 
}

int main() {
	
 int n;
 scanf("%d", &n);
 int i;
 for (i=2;i<n;i++){
     
     if (JePrvocislo(n) && SoucetJePrvocislo(n)) printf("%d ", n);    
 }         
}

