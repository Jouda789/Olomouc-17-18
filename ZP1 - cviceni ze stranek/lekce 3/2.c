#include <stdio.h>
#include <stdlib.h>

/* 2. Napište program, který naète 3 èísla a poté vypíše nejmenší z nich. */

int main(){
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);

    if (a<b){
      if (c<a) { printf("%d", c); }
      else { printf("%d", a);}

    } else {if (c<b) { printf("%d", c); }
      else { printf("%d", b);}}
}
