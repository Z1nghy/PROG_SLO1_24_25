//-----------------------------------------------------------------------------------//
// Nom du projet 		: DemoSLO_2024-2025
// Nom du fichier 		: DemoSLO
// Date de création 	: 19.09.2024
// Date de modification : xx.xx.20xx
//
// Auteur 				: Diego Alec Savary
//
// Version				: 0.1
//
// Description          : Demo pour les SLO 1
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  lien pour la saisie de clavier avec getc & getchar pour ne pas
//                        avoir des erreurs d'interprétation
// 						  -> http://fr.openclassrooms.com/informatique/cours/utiliser-les-bonnes-fonctions-d-entree
// 						  lien vers différents
// 						  -> http://fr.wikipedia.org/wiki/String.h
//----------------------------------------------------------------------------------//

//-- appel de librairies standard
#include <math.h>
#include <corecrt_math_defines.h>
// utilisation define


//-- appel de Headerfile (mes fichier)

//-- prototype      WARNING à eviter ici

//-- Variable Globale - WARNING à eviter

//-- Constante      WARNING à eviter ici

//-- Déclaration des fonctions 
// type_de_sortie nom_fct (param_entree1, param2 ...)
void main()
{
    // declaraion des variables
    // type nom_variable
    // type entier
    int longeur_m = 0, largeur_m = 0;

    // type réel
    float surfaceCarre_m2, surfaceRectangle_m2, surfaceTriangle_m2;

    // calcul d'une aire d'un carrée
    surfaceCarre_m2 = longeur_m * longeur_m;

    // calcul d'un aire de rectangle
    surfaceRectangle_m2 = longeur_m * largeur_m;

    // calcul d'un aire de triangle
    surfaceTriangle_m2 = (longeur_m * largeur_m) / 2;
    

    printf("\n Voici les solutions de votre calcul: %0.2f %0.2f %0.2f", surfaceTriangle_m2, surfaceRectangle_m2, surfaceCarre_m2);
   

   // instruction 1

    // instruction 1

    // test condition
        // instruction 1A

        // instruction 2A

    // instruction 3

}












/*
//--- librairie standart ---//
#include <stdio.h>	// pour usage printf et scanf_s
                    // Nouveauté du VC++ 2005, 2008, 2010 et 2015 : le scanf_s remplace scanf

    int main(void)
{

    return(0);
}


// comentaire sur une ligne

sssdsafwdfrweaf // comenter la ligne

/*

Commentaire sur
plusieur ligne


*/
