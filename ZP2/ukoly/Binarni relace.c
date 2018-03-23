#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Judita Kindlova

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

int** Zkopiruj(int **matice, int n) {
 int i;
 int j;

 int **pole2D = (int **)calloc(n /*rady*/, sizeof(int *));

 for (i = 0; i < n; i++)
	pole2D[i] = (int *)calloc(n /*sloupce*/, sizeof(int));

 for (i = 0; i<n; i++)
	for (j = 0; j < n; j++) {
		pole2D[i][j] = matice[i][j];
	}
	
 return pole2D;
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

int** Sjednot(int** maticeA, int** maticeB, int n){
	
  int i, j;

  int** maticeC;

  maticeC = Zkopiruj(maticeA, n);

  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++){
       if (maticeA[i][j] == 0 && maticeB[i][j] == 0) maticeC[i][j] = 0;
           else maticeC[i][j] = 1;
     }
  return maticeC;
}

int** Vynasob(int** maticeA, int** maticeB, int n){

  int** maticeC;

  maticeC = Zkopiruj(maticeA, n);

  int i, j, k;

  for (i = 0; i < n; i++)
	for (j = 0; j < n; j++){

		maticeC[i][j] = 0;

		for (k = 0; k < n; k++)
			maticeC[i][j] = (maticeC[i][j] + maticeA[i][k] * maticeB[k][j])%2;

     }
  return maticeC;
}

int main() {
  
 int velikost = 4;
  
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
   
 int **matice2 = Vynasob(matice, matice, velikost);

 int **maticeU = Zkopiruj(matice2, velikost);

 int **maticeN = Sjednot(matice, matice2, velikost); 

 int **maticeT = matice2;  //nahodna inicializace
 int **maticeM = matice2;  //nahodna inicializace
 int **maticeR = matice2;  //nahodna inicializace
 int **maticeQ = matice2;  //nahodna inicializace

 int i;
 for(i=0; i<velikost-2; i++) {
	maticeT = Zkopiruj(maticeU, velikost);
	maticeR = Vynasob(matice, maticeT, velikost);
	maticeM = Sjednot(maticeN, maticeR, velikost);
	Uvolni(maticeU, velikost);
	Uvolni(maticeN, velikost);
	Uvolni(maticeT, velikost);
	maticeU = maticeR;
	maticeN = maticeM;
}

 printf("\n");
 Vypis(maticeM, velikost);

 Uvolni(matice, velikost);
 Uvolni(matice2, velikost);
 Uvolni(maticeU, velikost);
 Uvolni(maticeN, velikost);  
  
}
