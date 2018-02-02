#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void staircase(int n) {
    int i;
    int j;
    for(j=1;j<=n;j++){
        i = n - j;
        while(i>0) {printf(" "); i--;}
        for(int k=0;k<j;k++) printf("#");
        printf("\n");
    }  
    
}

int main() {
    int n; 
    scanf("%i", &n);
    staircase(n);
    return 0;
}
