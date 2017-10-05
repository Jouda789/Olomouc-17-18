#include <stdio.h>
#include <stdlib.h>

/* 3. Napište program, který rozhodne, zdali je daný rok pøestupný. */

    int main()
        {
        unsigned rok = 0;
        printf("Zadej rok:\n");
        int v = scanf("%u", &rok);
        if(v != 1)
            {
            printf("Chybna vstupni data\n\a");
            return 1;
            }
    //    if( ((rok % 4 == 0) && (rok % 100 != 0)) || (rok % 400 == 0) )
    //        printf("rok %u je prestupny.\n", rok);
    //    else
    //        printf("rok %u neni prestupny.\n", rok);
        if(rok % 4 == 0)
            {
            if(rok % 100 != 0)
                printf("rok %u je prestupny.\n", rok);
            else
                {
                if(rok % 400 == 0)
                    printf("rok %u je prestupny.\n", rok);
                else
                    printf("rok %u neni prestupny.\n", rok);
                }
            }
        else
            printf("rok %u neni prestupny.\n", rok);

        return 0;
        }
