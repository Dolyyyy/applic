#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "application.h"
#include "ihm.h"
#include "config.h"

char menu(void)
{
    char carac;
    printf("------------------------------------------------------\n\n");
    printf("[ M ] : Faire le minimum et le maximum du tableau.\n");
    printf("[ S ] : Faire la somme et la moyenne du tableau.\n");
    printf("[ F ] : Quitter le programme.\n\n");
    printf("------------------------------------------------------\n");
    printf("\n>> ");
    scanf(" %c", &carac);
    return carac;
}

void traitechoix(int t1[][COLONNE],char choix)
{
    int somme;
    float moyenne;
    int min,max;
    switch (choix)
    {
    case 's':
    case 'S':
        moysom(t1,&moyenne,&somme);
        printf("La somme est egale a %d et la moyenne est de %g : \n\n",somme,moyenne);
        affichetab(t1);
        break;

    case 'm':
    case 'M':
        minmax(t1, &max ,&min);
        printf("Le minimum est de %d et le maximum de %d : \n\n",min,max);
        affichetab(t1);
        break;

    case 'f':
    case 'F':

        printf("Arret du programme\n");
        break;
        
    default:
        printf("Erreur retaper une lettre correct\n");
        break;
    }
    
}

void affichetab(int t1[][COLONNE])
{
    int i,i2;
    for (i = 0; i < LIGNE; i++)
    {
        for (i2 = 0; i2 < COLONNE; i2++)
        {
            printf("%d\t",t1[i][i2]);
        }
        printf("\n");
    }
    printf("\n\n");
}

void saisietab(int t1[][COLONNE])
{
    int i,i2;
        for (i = 0; i < LIGNE; i++)
    {
        for (i2 = 0; i2 < COLONNE; i2++)
        {
            printf("Entre la valeur dans la ligne %d colonne %d du tableau : ",i + 1,i2 + 1);
            scanf("%d",&t1[i][i2]);
        }
    }
}