#include<stdio.h>
#include<stdlib.h>

/* 9. Napište program pro určení počtu a typu (reálné vs. komplexní) řešení kvadratické
rovnice ax^2+bx+c=0. */

int main() {
 int a, b, c, diskr;
 printf("Zadejte koeficienty kvadraticke rovnice: ");
 scanf("%d %d %d", &a, &b, &c);
 diskr = b*b - 4*a*c;
 if (diskr < 0) printf("Rovnice ma dva komplexni koreny.");
 else if (diskr == 0) printf("Rovnice ma jeden dvojnasobny realny koren.");
 else printf("Rovnice ma dva realne ruzne koreny."); 
}
