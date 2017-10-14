#include<stdio.h>
#include<stdlib.h>
#define MAX 16

/* 5. Napiste program, ktery otoci poradi prvku v poli. */

int main() {
    int a[MAX];
    int i, pom;
    
    for (i=0; i < MAX; i++)
        a[i] = i;
    
    for (i=0;i<MAX/2;i++){
        pom = a[i];
        a[i] = a[MAX-i-1];
        a[MAX-i-1] = pom;       
    } 
    
    for (i=0; i < MAX; i++)
        printf("%d ", a[i]);
}
