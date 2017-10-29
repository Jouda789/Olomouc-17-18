#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 50

/* 8. Napiste program, který urci, zda-li je retezec palindromem. */

int main() {
    char ret[MAX];
    scanf("%s", ret);
    int i;
    int len = strlen(ret);
    for(i=0;(i<(len-1)/2);i++){
       if (ret[i] != ret[len-1-i]){
           printf("Neni palindrom.");
           return 0;
       }       
    }
    printf("Je palindrom.");
}
