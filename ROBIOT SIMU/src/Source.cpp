
/**************************************************************
* CLASSE : <nom de la classe>
* PRESENTATION : <description de la classe et de sa fonction>
*
* METHODES PUBLIQUES :
* <Methode1> : <description rapide de la methode 1>
* <Methode2> : <description rapide de la methode 2>
* <Methode3> : <description rapide de la methode 3>
* <Methode4> : <description rapide de la methode 4>
*
* OBSERVATIONS :
**************************************************************/



#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>

#include "pch.h"
// C++ code to demonstrate 2D vector 
#include <iostream> 
#include <vector> // for 2D vector 

#include "CLectureCarte.h"
using namespace std;


int main()
{
    CLectureCarte carte;



    carte.AfficheCarte();

    return EXIT_SUCCESS;

}
   /* char tableau[LIGNE][COLONNE];
    int i = 0; 
    int j = 0;

    for (j = 0; j < COLONNE; j++)
    {
        tableau[0][j] = '-';
        tableau[LIGNE-1][j] = '-';
    }

    for (i = 0; i < LIGNE; i++)
    {
        tableau[i][0] = '|';
        tableau[i][COLONNE - 1] = '|';
    }

    for (i = 1; i < LIGNE - 1; i++)
    {
        for (j = 1; j < COLONNE-1; j++)
        {
            tableau[i][j] = ' ';
        }
    }

    affiche_carte(tableau);

    printf("\n %d", sizeof(tableau));

    return EXIT_SUCCESS;

}



void affiche_carte(char carte[LIGNE][COLONNE])
{
    int j;
    int i;
    for (i = 0; i < LIGNE; i++)
    {
        for (j = 0; j < COLONNE; j++)
        {
            printf("%c", carte[i][j]);
        }
        printf("\n");
    }
   
}*/