#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* vytvor(int n){
 int *pole2D = (int *) calloc((n+2)*(n+2), sizeof(int)); //udelam si ho trosku vetsi na "zabrany" kolem...
 return pole2D;
}

int prohledej(int *pole, int n){
	int krizky = 0;
	int kolecka = 0;
	int nejdelsiKrizky = 0;
	int nejdelsiKolecka = 0;
	int i,j;
	
	for (i=1;i<=n+1;i++){
    	for(j=1;j<=n+1;j++){
    		
    		if (pole[ i * n + j ]==1) {
    			 
    			 if (pole[ i * n + j +1]==1||pole[ i * n + j -1]==1) {krizky++; kolecka = 0;}
				 else kolecka = 0;
    		   			
			}
			
    		if (pole[ i * n + j ]==2) {
    			
    		 	 if (pole[ i * n + j +1]==2||pole[ i * n + j -1]==2) {kolecka++; krizky = 0;}
    			 else krizky = 0;
    			
			}
		}
		if (krizky==n || kolecka==n){
			if (krizky==n) printf("\nNejdelsi posloupnost ma %i krizku na radku %i", n, i+1);
			else printf("\nNejdelsi posloupnost ma %i kolecek na radku %i", n, i+1);
			return 0;
		} else {
			if (krizky > nejdelsiKrizky) nejdelsiKrizky = krizky;
			if (kolecka > nejdelsiKolecka) nejdelsiKolecka = kolecka;
			
		}
		krizky = 0;
		kolecka = 0;
	}
	
	if (nejdelsiKrizky > nejdelsiKolecka) printf("\nNejdelsi posloupnost ma %i krizku.", nejdelsiKrizky);
	else if (nejdelsiKrizky < nejdelsiKolecka) printf("\nNejdelsi posloupnost ma %i kolecek.", nejdelsiKolecka);
	else printf("\nExistuje stejne dlouha posloupnost krizku i kolecek, ktera je %i dlouha.", nejdelsiKrizky);
}

int main() {
  
  int n = 6; // velikost pole (bude zvetsena o 2)
  
  int i;
  int j;
  
  int *pole = vytvor(n);
  
  srand(time(NULL)); 
    
  for (i=0;i<=n+1;i++)
    for(j=0;j<=n+1;j++){
    	if (i==0 || i==(n+1) || j==0 || j==(n+1)){
    		pole[ i * n + j ] = 0;
		}
    	else {
    		pole[ i * n + j ] = rand() % 3;
		}        	
	}
	
  /*for (i=1;i<n+1;i++){
    	for(j=1;j<n+1;j++){	
       		pole[ i * n + j ] = rand() % 3;
			}
    }*/	
      
  for (i=0;i<=n+1;i++){
    for(j=0;j<=n+1;j++)
      printf("%i ",pole[ i * n + j ]);
    printf("\n");}       
  
  prohledej(pole, n);
        
  return 0;
  
 }
