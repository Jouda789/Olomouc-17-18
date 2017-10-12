#include<stdio.h>
#include<stdlib.h>

/* 6. Ze vstupu načtěte délky stran trojúhelníka. Rozhodněte, jestli se trojúhelník s danými
delkami stran existuje. Pokud ano, rozhodněte, jestli je pravoúhlý, rovnostranný nebo
obyčejný. */

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
