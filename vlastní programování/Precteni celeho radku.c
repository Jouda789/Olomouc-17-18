#include <stdio.h>

//Tento kod precte cely radek!

int main()
{
  char lineContent[100]; 
  scanf("%99[^\n]", &lineContent);
  printf("%s", lineContent);
}
