#include<stdio.h>
#include<stdlib.h>

/* 6. Ze vstupu na�t�te d�lky stran troj�heln�ka. Rozhodn�te, jestli se troj�heln�k s dan�mi
delkami stran existuje. Pokud ano, rozhodn�te, jestli je pravo�hl�, rovnostrann� nebo
oby�ejn�. */

int main() {
   int a,b,c;
    printf("Zadejte stranu a: \n");
    scanf("%d", &a);
    printf("Zadejte stranu b: \n");
    scanf("%d", &b);
    printf("Zadejte stranu c: \n");
    scanf("%d", &c);
    if ( (a>(b+c)) || (b>(a+c)) || (c>(a+b)) ){

        printf("Nelze sestrojit.");}

else {  printf("Lze sestrojit.\n");
   	
   	if ((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==a*a+b*b)) {printf("Trojuhlenik je pravouhly."); }
    else if ((a==b) && (b==c)) { printf("Trojuhlenik je rovnostranny."); }
    else if ((a==b)||(b==c)||(a==c)) { printf("Trojuhlenik je rovnoramenny."); }
    else printf("Trojuhlenik je obyceny.");
  }
}
