#include <stdio.h>
#include <stdlib.h>

/* 2. Napi�te program, kter� na�te 3 ��sla a pot� vyp�e nejmen�� z nich. */

int main(){
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);

    if (a<b){
      if (c<a) { printf("%d", c); }
      else { printf("%d", a);}

    } else {if (c<b) { printf("%d", c); }
      else { printf("%d", b);}}
}
