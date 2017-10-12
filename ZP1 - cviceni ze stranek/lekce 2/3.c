#include <stdio.h>
#include <stdlib.h>

/* 3. Napiste program, ktery vypise velikosti vsech zakladnich typu na vasem pocitaci. */

int main()
{
    int q = sizeof(int);
    int w = sizeof(char);
    int s = sizeof(short);
    int l = sizeof(long);
    int f = sizeof(float);
    int d = sizeof(double);

    printf("int = %d\nchar = %d\nshort = %d\nlong = %d\nfloat = %d\ndouble = %d", q, w, s, l, f, d);
}
