#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 50

/* 2. Napiste program, ktery urci maximalni pocet znaku, na kterych je konec retezce r1 stejny jako zacatek retezce r2.  */

int main() {
    char r1[MAX], r2[MAX];
    
    scanf("%s %s", r1, r2);
    
    int i, citac = 0;
    int len1 = strlen(r1);
    int len2 = strlen(r2);
    
    /* nejdriv zjistim, jestli se posledni pismeno r1 vyskytuje v r2 -
    jestli ne, program konci */
    
    int pom = 0;
     
    for (i=0;i<len2;i++){
        if (r1[len1-1] == r2[i]) {pom = 1; break;}
    }
    
    if (pom == 0) {
        printf("Zacatek slova r2 se shoduje s koncem slova r1 v 0 pismenech.");
        return 0; } 
    
    int k = (len1-1-i);
    int j = 0;
    
    while (j < i){
        
        if(r1[k] != r2[j]) {
            printf("Zacatek slova r2 se shoduje s koncem slova r1 v 0 pismenech.");
            return 0; }
               
        k++;
        j++;
    }   
    
    printf("Zacatek slova r2 se shoduje s koncem slova r1 v %d pismenech.", i+1);
    
}
