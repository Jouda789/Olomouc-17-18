#include<stdio.h>
#include<stdlib.h>
#define MAX 5

/* 3. Napiste program, ktery rozhodne, jestli jsou dve pole stejna. */

int main() {
    int a[MAX], b[MAX];
    int i, pom = 1;
    
    for (i=0; i < MAX; i++)
        scanf("%d", &a[i]);
    
    for (i=0; i < MAX; i++)
        scanf("%d", &b[i]);
    
    for (i=0;i<MAX;i++){
        if (a[i] != b [i]) {printf("Jsou jina."); pom = 0; break;}     
    } 
    
    if (pom == 1) {printf("Jsou stejna.");}
}
