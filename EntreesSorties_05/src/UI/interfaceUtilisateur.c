///////////////////////////////////////////////////////////////////////////////////////////
//
//  fichier : storagDonnees
//
//  ce fichier defini toute les fonctions de l'interface utilisateur
//
///////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "utilisateurInterface.h"
#include "../storage/stockageDonnees.h"

	void effectuerSequence(){
		afficherBienvenue();
		saisirInformation();
		afficherInformation();

	}

	void afficherBienvenue(){

		printf("\n+-----------------------------------+");
		printf("\n|                                   |");
		printf("\n|   Programme de EntreesSorties_05  |");
		printf("\n|                                   |");
		printf("\n|         Salut l'Amie !!           |");
		printf("\n|                                   |");
		printf("\n+-----------------------------------+");
	}

		char nom[BUFSIZ];
		char* pNom;

		char prenom[BUFSIZ];
		char* pPrenom

		char age[BUFSIZ];
		char* pAge;

	void saisirInformation(){

		printf("\n Veuillez saisir votre Nom : ");

		fgets(nom, BUFSIZ, stdin);
		fflush(stdin);

		printf("\n Veuillez saisir votre Prenom : ");

		fgets(prenom, BUFSIZ, stdin);
		fflush(stdin);

		printf("\n Veuillez saisir votre Age : ");

		fgets(age, BUFSIZ, stdin);
		fflush(stdin);

		sauvegarderNom(pNom, nom);
		sauvegarderPrenom(pPrenom, prenom);
		sauvegarderAge(pAge, age);

	}

	void afficherInformation(){

		printf("\n+ Vos informations personnelles ont ete sauvegardees : +\n");

		printf("\n+-------------------------------+");
		printf("\n| Votre prenom : %s", prenom);
		printf("\n|");
		printf("\n| Votre nom : %s", nom);
		printf("\n|");
		printf("\n| Votre age : %s", age);
		printf("\n|");
		printf("\n+-------------------------------+");
	}
