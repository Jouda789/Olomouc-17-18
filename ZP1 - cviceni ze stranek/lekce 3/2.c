#include <stdio.h>
#include <stdlib.h>

/* 2. Napiste program, ktery nacte 3 cisla a pak vypise nejmensi z nich. */

int main(){
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);

    if (a<b){
      if (c<a) { printf("%d", c); }
      else { printf("%d", a);}

    } else {if (c<b) { printf("%d", c); }
      else { printf("%d", b);}}
}

/* nebo */

int main() {
   int a , b, c;
  scanf("%d %d %d", &a, &b, &c);
    if (a<b && a<c) {
        printf("%d", a);
    }
    else if (b<c){
        printf("%d", b);
    } else printf("%d", c);   
}
