/*
 * Etudiant.h
 *
 *  Created on: 27 avr. 2018
 *      Author: 34011-55-04
 */

#ifndef SRC_ETUDIANT_H_
#define SRC_ETUDIANT_H_

#include <iostream>
#include <string>

/**
 * Declaration de la classe "étudiant"
 */
class Etudiant {

private:

	/*
	 * Nom de l'etudiant
	 */
	std::string nom;

	/*
	 * Prenom de l'etudiant
	 */
	std::string prenom;

	/*
	* Age de l'etudiant
	*/
	int age;

//--------------------------------------------------------------//
public:

	/*
	 * Constructeur sans arguments
	 */
	Etudiant();

	/*
	 * Constructeur avec trois arguments
	 *
	 * @param pNom Nom de l'etudiant
	 * @param pPrenom Prenom de l'etudiant
	 * @param pAge Age de l'etudiant
	 */
	Etudiant(std::string pNom, std::string pPrenom, int Age);

	/*
	 * Destructeur ne prend rien en param ou en argument
	 */
	virtual ~Etudiant();

//--------------------------------------------------------------//
	/*
	 * Accesseur en lecture (Attribut: "nom")
	 */
	std::string getNom();

	/*
	 * Accesseur en lecture (Attribut: "prenom")
	 */
	std::string getPrenom();

	/*
	 * Accesseur en lecture (Attribut: "age")
	 */
	int getAge();
};

#endif /* SRC_ETUDIANT_H_ */
