/*
 * Personnage.h
 *
 *  Created on: 26 avr. 2018
 *      Author: 34011-55-04
 */

#ifndef PERSONNAGE_H_
#define PERSONNAGE_H_

#include <iostream>
#include <string>

#include "Arme.h"


class Personnage {

	// attributs = variables
private:

	/*
	 * Objet Arme
	 */
	Arme *m_arme;

	int _value;

	static Personnage *_singleton;

protected:

	/*
	 * Niveau de vie
	 */
	int *m_vie;

	/*
	 * Quantit� de magie
	 */
	int m_mana;

	/*
	 * Non de personnage
	 */
	std::string m_nom;


//--------------------------------------------------------------//
public:

	// le constructeur par default
	Personnage();

	// 2eme constructeur surcharg�
	Personnage(std::string pNom, std::string pNomArme, std::string*m_arme, int pVie, int pMana, int DegatsArme);

	// le constructeur de copie (d'ajout de personnage)
	Personnage(Personnage const& autre);

	//l'operateur de copie


//--------------------------------------------------------------//

	void recevoirDegats(int nbDegats);

	void attaquer(Personnage &cible);

	void boirePotionDeVie(int quantitePotion);

	void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);

	bool estVivant() const;

//--------------------------------------------------------------//

	/*
	 * Accesseur en lecture (Attribut: "nom")
	 */
	std::string getNom();

	/*
	 * Accesseur en lecture (Attribut: "nom arme")
	 */
	std::string getArme();

	/*
	 * Accesseur en lecture (Attribut: "Sant�")
	 */
	int getVie();

	/*
	 * Accesseur en lecture (Attribut: "energie")
	 */
	int getMana();

	/*
	 * Accesseur en lecture (Attribut: "_value")
	 */
	int getValue();

//--------------------------------------------------------------//

	/*
	 * Mutateur en lecture (Attribut: "Energie")
	 */
	void setMana(int mana) {
		m_mana = mana;
	}

	/*
	 * Mutateur en lecture (Attribut: "Nom")
	 */
	void setNom(const std::string& nom) {
		m_nom = nom;
	}

	/*
	 * Mutateur en lecture (Attribut: "Sant�")
	 */
	void setVie(int vie) {
		*this->m_vie = vie;
	}

	/*
	 * Mutateur en lecture (Attribut: "_Value")
	 */
	void setValue(int val) {
		_value = val;
	}

//--------------------------------------------------------------//

	// afficher etat du combat de cocks
	void afficherEtat() const;

	void affPVie() const;

	void affArme() const;

	// methode static
	static Personnage *getInstance();
	static void kill();

	void sePresenter() const;
//--------------------------------------------------------------//
	virtual ~Personnage();

};


#endif /* PERSONNAGE_H_ */
