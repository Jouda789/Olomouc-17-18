#include <stdio.h>
#include <stdlib.h>

/* 9. Napi�te program, kter� na�te velk� p�smeno, a vyp�e jej jako mal� p�smeno. */

int main(){
    char ch, p;
    scanf("%c", &ch);
    int i;
    i = int(ch);
    i += 32;
    p = char(i);
    printf("%c", p);
}
