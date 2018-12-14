///////////////////////////////////////////////////////////////////////////////////////////
//
//  fichier : storagDonnees
//
//  ce fichier defini les fonctions de sauvegarde/extraction de donnees.
//
///////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "stockageDonnees.h"
#include "../UI/utilisateurInterface.h"


void sauvegarderNom(char* pNom, char nom[]){


	pNom = malloc(nom[BUFSIZ]);

	   int taille = strlen(nom);
	    int i;

	        for (i = 0; i <= taille-1; i ++){

	            *(pNom+i) = nom[i];
	            printf("\n\nVotre nom : Element N %x : %c", i, nom[i]);
	        }

//    return pNom;
//    printf("\n\nVotre nom : Element N 0 : %c", nom[0]);
//    printf("\nVotre nom : Element N 1 : %c", nom[1]);
//    printf("\nVotre nom : Element N 2 : %c", nom[2]);
//    printf("\nVotre nom : Element N 3 : %c", nom[3]);
//    printf("\nVotre nom : Element N 4 : %c", nom[4]);
//    printf("\nVotre nom : Element N 5 : %c", nom[5]);
//    printf("\nVotre nom : Element N 6 : %c", nom[6]);
//    printf("\nVotre nom : Element N 7 : %c", nom[7]);
}

void sauvegarderPrenom(char* pPrenom,char prenom[]){

   pPrenom = malloc(prenom[BUFSIZ]);

   int taille = strlen(pPrenom);
    int i;

        for (i = 0; i <= taille-1; i ++){

            *(pPrenom+i) = prenom[i];
            printf("\n\nVotre prenom : Element N %x : %c", i, prenom[i]);
        }

        //return pPrenom;
//    printf("\n\nVotre prenom : Element N 0 : %c", prenom[0]);
//    printf("\nVotre prenom : Element N 1 : %c", prenom[1]);
//    printf("\nVotre prenom : Element N 2 : %c", prenom[2]);
//    printf("\nVotre prenom : Element N 3 : %c", prenom[3]);
//    printf("\nVotre prenom : Element N 4 : %c", prenom[4]);
//    printf("\nVotre prenom : Element N 5 : %c", prenom[5]);
//    printf("\nVotre prenom : Element N 6 : %c", prenom[6]);
//    printf("\nVotre prenom : Element N 7 : %c", prenom[7]);
}

void sauvegarderAge(char* pAge, char age[]){

	pAge = malloc(age[BUFSIZ]);

	   int taille = strlen(pAge);
	    int i;

	        for (i = 0; i <= taille-1; i ++){

	            *(pAge+i) = age[i];
	            printf("\n\nVotre age : Element N %x : %c", i, age[i]);
	        }

//        return pAge;
//    printf("\n\nVotre age : Element N 0 : %c", age[0]);
//    printf("\nVotre age : Element N 1 : %c", age[1]);

}
