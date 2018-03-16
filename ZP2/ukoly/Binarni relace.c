#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int** Vytvor(int n){
  int i;
  int j;
  
  int **pole2D = (int **) calloc(n /*rady*/, sizeof (int *));
    
  for (i = 0; i < n; i++) 
    pole2D[i] = (int *) calloc(n /*sloupce*/ ,sizeof(int));
  
  for (i=0;i<n;i++)
    for(j=0;j<n;j++){
      pole2D[i][j] = rand() % 2;
      //if (i<j) pole2D[i][j] = 1; //test na antisymetrii
      //pole2D[i][j] = 0; //test na symetrii
      //if (i==0 || i==1) pole2D[i][j] = 1; //test na tranzitivitu
    }
  return pole2D;
}

void Vypis(int **matice, int n){
  
  int i, j;
  
  for (i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("%i ", matice[i][j]); 
    }
    printf("\n");
  }
  
}

void Uvolni(int **matice, int n){
  
  int i;
  
  for (i = 0; i < n; i++) 
    free(matice[i]);

  free(matice);
  
  
}

int Reflexivni(int **matice, int n){
  
  int i;
  
  for (i=0;i<n;i++){
    if (matice[i][i] == 0) return 0;    
  }
  
  return 1;
  
}

int Antisymetrie(int **matice, int n){
  
  int i, j;
  
  for(i=0; i<n; i++)
    for(j=0; j<n; j++){
    
    if (i==j) continue;
    
    if(matice[i][j] == matice[j][i]) return 0;
    
  }
  
  return 1; 
  
}

int Symetrie(int **matice, int n){
  
  int i, j;
  
  for(i=0; i<n; i++)
    for(j=0; j<n; j++){
    
    if (i==j) continue;
    
    if(matice[i][j] != matice[j][i]) return 0;
    
  }
  
  return 1; 
  
}

int Tranzitivita(int **matice, int n){
  
  int i, j, k;
  
  for(i=0; i<n; i++)
    for(j=0; j<n; j++){
    
    if (i==j) continue;
    
    if(matice[i][j] == 1){
      
      for(k=0;k<n;k++){
        
        if(matice[j][k]==1 && matice[i][k]==0) return 0;
        
      }      
      
    }
    
  }
  
  return 1; 
  
}

int main() {
  
 int velikost = 3;
  
 srand(time(NULL));  
  
 int **matice = Vytvor(velikost);
  
 Vypis(matice, velikost);
  
 int r = Reflexivni(matice, velikost); 
  
 if(r) printf("Relace je reflexivni.\n");
   else printf("Relace neni reflexivni.\n");
  
 int a = Antisymetrie(matice, velikost); 
  
 if(a) printf("Relace je antisymetricka.\n");
  else printf("Relace neni antisymetricka.\n");
  
 int s = Symetrie(matice, velikost); 
  
 if(s) printf("Relace je symetricka.\n");
  else printf("Relace neni symetricka.\n");
  
 int t = Tranzitivita(matice, velikost); 
  
 if(t) printf("Relace je tranzitivni.\n");
  else printf("Relace neni tranzitivni.\n");
   
 Uvolni(matice, velikost); 
  
}
