#include<stdio.h>
#include<stdlib.h>

/* 7. Napište program, který naète ze vstupu èíslici a vypíše ji slovnì. */

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
