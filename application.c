#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "config.h"

void moysom(int t1[][COLONNE],float * m,int * s)
{
    int i,i2;
    *s = 0;
    for (i = 0; i < LIGNE; i++)
    {
        for (i2 = 0; i2 < COLONNE; i2++)
        {
            *s = t1[i][i2] + *s;
        }
    }
    *m = (float) * s / (LIGNE * COLONNE);
}

void minmax(int t1[][COLONNE], int * min, int * max){

    int i,i2;

    *max = t1[0][0];
    *min = t1[0][0];

    for (i = 0; i < LIGNE; i++)
    {
        for (i2 = 0; i2 < COLONNE; i2++)
        {
            *max = (*max < t1[i][i2]) ? * max : t1[i][i2];
        }
        
    }

    for (i = 0; i < LIGNE; i++)
    {
        for (i2 = 0; i2 < COLONNE; i2++)
        {
            *min = (*min > t1[i][i2]) ? * min : t1[i][i2];
        }
        
    }
}