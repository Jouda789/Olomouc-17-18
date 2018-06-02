#include <stdio.h>
#include <string.h>
#include <ctype.h>
//#include "linux.words"

int Porovnej(char* ch1, char* ch2) {
	char c;
	int len1 = strlen(ch1);
	int len2 = strlen(ch2);
	int i, j, citac = 0;
	int pole[100];
	for (i = 0;i<len2;i++)
		pole[i] = 0;
	for (i = 0;i<len1;i++) {
		c = ch1[i];
		for (j = 0;j<len2;j++) {
			if ((c == ch2[j]) && (pole[j] == 0)) { pole[j] = 1; citac++; break; }
		}
	}
	if (citac == len1) return 1;
	else return 0;
}

int main()
{
	char ch;
	int i = 0;
	char slovo[255];
	int vysledek;
	char vstup[20]; //ne delsi nez 20
	scanf("%s", &vstup);
	FILE *input = fopen("linux.words", "rt");
	while (fgets(slovo, 255, input) != NULL) {
		vysledek = Porovnej(vstup, slovo);
		if (vysledek) printf("%s\n", slovo);
	}
	fclose(input);
}
