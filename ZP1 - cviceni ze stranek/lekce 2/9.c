#include <stdio.h>
#include <stdlib.h>

/* 9. Napište program, který načte velké písmeno, a vypíše jej jako malé písmeno. */

int main(){
    char ch, p;
    scanf("%c", &ch);
    int i;
    i = int(ch);
    i += 32;
    p = char(i);
    printf("%c", p);
}
