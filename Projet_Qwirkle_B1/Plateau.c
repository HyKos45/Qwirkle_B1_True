//
//  Plateau.c
//  Projet_Qwirkle_B1
//
//  Created by Alexandre Puiseux on 18/01/2023.
//

#include <stdio.h>

void plateau (void)
{
    printf("\t A\tB\tC\tD\tE\tF\tG\tH\tI\tJ\tK\tL\tM\tN\tO\tP\tQ\tR\tS\tT\tU\tV\tW\tX\tY\tZ\n");
    for (int i = 0; i<12; i++)
    {
        printf("\t%d\n\n", i+1);
    }
}
