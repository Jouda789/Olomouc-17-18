#include<stdio.h>
#include<stdlib.h>

/* 8. Napište program, který pro èíslo n vypíše trojúhelník podle vzorù v následujících pøíkladech. */

int main() {
	int vyska;
 	printf("Zadejte vysku trojuhleniku: ");
	scanf("%d", &vyska);
	int i, j, pom, k;
	pom = 1;
	for (i=1;i<=vyska;i++){
		for (j=1;j<=i;j++){
		printf("%d", j);
		}	
		printf("\n");		
	}
	
	printf("\n"); printf("\n");
	
	for (i=1;i<=vyska;i++){
		for (j=1;j<=i;j++){
		printf("%d ", pom);
		pom++;
		}	
		printf("\n");		
	}
	
	printf("\n"); printf("\n");
	
	for (i=1;i<=vyska;i++){
		for (j=1;j<=vyska-i;j++){
		printf(" ");
		}	
		for (k=1;k<=i;k++){
		printf("* ");	
		}
		printf("\n");		
	}
	
}
