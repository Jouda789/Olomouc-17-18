#include<stdio.h>
#include<stdlib.h>

/* 7. Napi�te program, kter� na�te ze vstupu ��slici a vyp�e ji slovn�. */

int main() {
   int cislice;
   printf("Zadejte cislici: ");
   scanf("%d", &cislice);
   switch(cislice){
   	case 1: printf("Jedna.");
   			break;
   	case 2: printf("Dva.");
   			break;
   	case 3: printf("Tri.");
   			break;
   	case 4: printf("Ctyri.");
   			break;
   	case 5: printf("Pet.");
   			break;
   	default: printf("Umim rict jenom cislice jedna az pet.");   	
   }  
}
