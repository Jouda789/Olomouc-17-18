#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	int i, j, pom = n;
    int i2 = 2*n - 1;
    int j2 = 2*n - 1;   
    for (i=0;i<i2;i++){
         for (j=0;j<j2;j++){ 
             printf("%d ", pom);
             if (i >= n){
                 if (2*n-1-i > j+1) pom--;
                 else if (j > i-1) pom++;
                 else continue;                
             } else {
                 if (i > j) pom--;
                 else if (2*n-1-j > i+1) continue;
                 else pom++;                
             }
         }       
        printf("\n");
        pom = n;
    }
    return 0;
}
