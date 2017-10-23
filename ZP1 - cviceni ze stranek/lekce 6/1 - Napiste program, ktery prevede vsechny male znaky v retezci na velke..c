#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 1. Napiste program, ktery prevede vsechny male znaky v retezci na velke. */

int main(){
    int i, len;
    char stri[50];
    scanf("%s", stri);
    len = strlen(stri);
    for(i=0;i<len;i++){
        if ((int(stri[i]) >= 97) && (int(stri[i]) <= 122))
        {printf("%c", int(stri[i]) - 32);}  
        else printf("%c", stri[i]);
    }
}
