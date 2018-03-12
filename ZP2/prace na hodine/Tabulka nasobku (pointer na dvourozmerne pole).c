#include <stdio.h>
#include <stdlib.h>

int* myFun2(int m, int n){
  int i;
  int j;
  
  int *pole2D =(int *) calloc(m*n, sizeof(int));
  
  for (i=0;i<n;i++)
    for(j=0;j<m;j++)
      pole2D[ i * n + j ] = i * j;
  
  return pole2D;
}

int** myFun(int m, int n){
  int i;
  int j;
  
  int **pole2D = (int **) calloc(n /*rady*/, sizeof (int *));
    
  for (i = 0; i < n; i++) 
    pole2D[i] = (int *) calloc(m /*sloupce*/ ,sizeof(int));
  
  for (i=0;i<n;i++)
    for(j=0;j<m;j++)
      pole2D[i][j] = i * j;
  
  return pole2D;
}

int main() {
  
  int m = 5;
  int n = 7;
  
  int i;
  int j;
  
  int **pole = myFun(m,n);
  
  for (i=0;i<n;i++){
    for(j=0;j<m;j++){
      printf("%2i ", pole[i][j]); 
    }
    printf("\n");
  }
  
  for (i = 0; i < n; i++) 
    free(pole[i]);

  free(pole);
  
  printf("********************************\n");
  
  int *pole2 = myFun2(m,n);
  
  for (i=0;i<n;i++){
    for(j=0;j<m;j++){
      printf("%2i ", pole2[i*n+j]); 
    }
    printf("\n");
  }
  
  /*free(pole2);*/
      
  return 0;
  
 }
