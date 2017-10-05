#include <stdio.h>
#include <stdlib.h>

/* 3. Napište program, který vypíše velikosti všech základních typù na vašem poèítaèi. */

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
