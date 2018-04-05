#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int precti_cislo(FILE *input)
{
   char buffer[20];
   char ch = getc(input);
   int buf_index = 0;
   int cislo;

   while(ch != '\n'){
    buffer[buf_index] = ch;
    buf_index += 1;
    ch=getc(input);
  }

  buffer[buf_index] = 0;
  cislo = atoi(buffer);

  return cislo;
}


void cnt_to_dat(FILE *input, FILE *output)
{
    int r = precti_cislo(input); //radky
    int s = precti_cislo(input); //sloupce
    int i, j;
    char ch = getc(input);;

    fprintf(output, "%i\n%i\n", r, s);

    for(i=0;i<r;i++){
        for(j=0;j<s;j++){
            if(ch == '\n') ch = getc(input);
            if(ch == '1')
            fprintf(output, "%i ", j);
            ch = getc(input);
            }
        fprintf(output, "\n");
    }
}

int main()
{
  FILE *input = fopen("vstup.cnt","rt");
  FILE *output = fopen("vystup.dat","wt");

  cnt_to_dat(input,output);

  fclose(input);
  fclose(output);

  return 0;
}
