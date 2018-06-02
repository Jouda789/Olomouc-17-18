#include <stdio.h>

//Tento kod precte cely radek!

int main()
{
  char lineContent[100]; 
  scanf("%99[^\n]", &lineContent);
  printf("%s", lineContent);
}

/* In order to take a line as input, you can use scanf("%[^\n]%*c", s);
where s is defined as char s[MAX_LEN] where MAX_LEN is the maximum size of s.
Here, [] is the scanset character. ^\n stands for taking input until a newline isn't encountered.
Then, with this %*c, it reads the newline character and here, the used * indicates that this newline character is discarded.*/
