#include <stdio.h>
#include <stdlib.h>

/* 6. Napi�te program, kter� na�te stranu �tverce a vyp�e jeho obvod a obsah. */

int main(){
    int strana;
    printf("Napiste stranu ctverce: \n");
    scanf("%d", &strana);
    printf("Obsah tohoto ctverce je %d, obvod je %d.", strana * strana, 4 * strana);
}
