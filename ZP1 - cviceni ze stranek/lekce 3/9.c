#include<stdio.h>
#include<stdlib.h>

/* 9. Napi�te program pro ur�en� po�tu a typu (re�ln� vs. komplexn�) �e�en� kvadratick�
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
