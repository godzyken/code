/*
 * main.cpp
 *
 *  Created on: 27 avr. 2018
 *      Author: 34011-55-04
 */

#include <iostream>

#include "Etudiant.h"

using namespace std;

int main(void){

	/////////////////////////////////////////////////////////////////////
	// (01.) CREATION D' UN OBJET "ETUDIANT"
	/////////////////////////////////////////////////////////////////////

	Etudiant* etudiant1 = new Etudiant();



	/////////////////////////////////////////////////////////////////////
	// (02.) REMPLISSAGE DE L'OBJET "ETUDIANT"
	/////////////////////////////////////////////////////////////////////
	// TODO



	/////////////////////////////////////////////////////////////////////
	// (03.) AFFICHAGE DU CONTENU DE L'OBJET
	/////////////////////////////////////////////////////////////////////
	cout << "le nom de l'etudiant : " << etudiant1->getNom() << endl;

	cout << "le prenom de l'etudiant : " << etudiant1->getPrenom() << endl;

	cout << "l'age de l'etudiant : " << etudiant1->getAge() << endl;

	system("PAUSE");

	return 0;
}


