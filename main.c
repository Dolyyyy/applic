#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ihm.h"
#include "config.h"

int main(void)
{
    char choice;

    int tab2[LIGNE][COLONNE];
    saisietab(tab2);
    do
    {
        choice = menu();
        traitechoix(tab2,choice);
    } while (choice != 'f');
    return 0;
}