#include <stdio.h>
#include <string.h>
#define VEL 4

//Zkopirovano z internetu.

int Pouzito(int a, int permutace[VEL], int index)
{
    int i;
    for (i = 0; i < index; i++)
        if (permutace[i] == a)
            return 1;

    return 0;
}


int Projdi(int index, int permutace[VEL], int pocetPrvku)
{
    int k, j;   
    if (index == pocetPrvku)
    {
        for(k = 0; k < pocetPrvku; k++)
            printf("%d ", permutace[k]);
            printf("\n");
        return 0;
    }

    for(j = 1; j <= pocetPrvku; j++)
    {

        if (!Pouzito(j, permutace, index))
        {
            permutace[index] = j;
            Projdi(index + 1, permutace, pocetPrvku);
        }
    }
}

int main()
{
    int permutace[VEL];
    Projdi(0, permutace, VEL);
}
