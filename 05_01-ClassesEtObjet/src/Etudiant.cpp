/*
 * Etudiant.cpp
 *
 *  Created on: 27 avr. 2018
 *      Author: 34011-55-04
 */


#include "Etudiant.h"

using namespace std;

/*
 * Constructeur sans arguments
 */
Etudiant::Etudiant() {

	cout << "i'm the constrictor sans argument" << endl;

	//-----------------------------
	// initialisation des attributs
	//-----------------------------

	this->nom = "[non def]";
	this->prenom = "[non def]";
	this->age = 0;
}


/*
 * Constructeur avec trois arguments
 *
 * @param pNom Nom de l'etudiant
 * @param pPrenom Prenom de l'etudiant
 * @param pAge Age de l'etudiant
 */
Etudiant::Etudiant(string pNom, string pPrenom, int Age){

	cout << "i'm the constrictor avec 3 arguments" << endl;

	//-----------------------------
	// initialisation des attributs
	//-----------------------------

	this->nom = pNom;
	this->prenom = pPrenom ;
	this->age = Age;
}


/*
 * Destructeur ne prend rien en param ou en argument
*/
Etudiant::~Etudiant() {
	// TODO Auto-generated destructor stub
}

//--------------------------------------------------------------//

/*
 * Accesseur en lecture (Attribut: "nom")
 */
string Etudiant::getNom()
{
	return this->nom;
}

/*
 * Accesseur en lecture (Attribut: "prenom")
 */
string Etudiant::getPrenom()
{
	return this->prenom;
}

/*
 * Accesseur en lecture (Attribut: "age")
 */
int Etudiant::getAge()
{
	return this->age;
}

//--------------------------------------------------------------//
