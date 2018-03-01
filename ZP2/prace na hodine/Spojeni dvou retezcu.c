#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * spoj(char* r1, char* r2)

{
  int s1 = strlen(r1);
  int s2 = strlen(r2);
  int s3 = s1 + s2 + 1;
  int i = 0;
  char *r3;
  r3 = malloc(s3 * (sizeof(char)));
  
  while (*r1 != '\0') {
    
    r3[i] = *r1;
    i++;
    r1++;
  }
  
  while (*r2 != '\0') {
    
    
    r3[i] = *r2;
    i++;
    r2++;
    
  }
  
  return r3;
}

int main(void) {
  char *retez = spoj("Hello ", "world!");
  printf("%s\n", retez);
  
  free(retez);
}
