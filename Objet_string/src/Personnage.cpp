/*
 * Personnage.cpp
 *
 *  Created on: 26 avr. 2018
 *      Author: 34011-55-04
 */
#include <iostream>
#include <string>

#include "Personnage.h"

using namespace std;

Personnage::Personnage(){
	this->m_nom = "[non def]";
	this->m_mana = 100;
	this->m_vie = 100;
	m_arme = new Arme();
}
// on peut construire de ces deux facon  !!

/*
 * Constructeur 3 args
 *
 * @param pNom Nom du personnage
 * @param pNomArme Nom de l'Arme
 * @param pVie Niveau de Santé du personnage
 * @param pMana Niveau d'energie du personnage
 */
Personnage::Personnage(string pNom, string pNomArme, string*m_arme, int pVie, int pMana, int DegatsArme){
	this->m_nom = pNom;
	this->m_vie = pVie;
	this->m_mana = pMana;
	this->m_arme = new Arme();
}

 // construicteur copie du constructeur pour ajouter un autre personnage "particulier"
Personnage::Personnage(Personnage const& autre){
m_vie = autre.m_vie;
m_mana = autre.m_mana;
m_arme = new Arme(*(autre.m_arme));
}

//l'operateur d'affectation
Personnage& Personnage::operator=(Personnage const& autre){
	if(this != &autre)
	{
		m_vie = autre.m_vie;
		m_mana = autre.m_mana;
	delete m_arme;
		m_arme = new Arme(*(autre.m_arme));
	}
	return *this;
}

//--------------------------------------------------------------//
void Personnage::recevoirDegats(int nbDegats) {

	m_vie -= nbDegats; // enlever valeur degat a m_vie

	if (m_vie < 0) {
		m_vie = 0;
	}

}

void Personnage::attaquer(Personnage &cible) {


	cible.recevoirDegats(m_arme->getDegats()); // inflige des degats a la cible

}

void Personnage::boirePotionDeVie(int quantitePotion) {

	*m_vie += quantitePotion;

	if (*m_vie > 100) // limiter le niveau de vie possible
			{
		*m_vie = 100;
	}
}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme) {

	m_arme->changer(nomNouvelleArme, degatsNouvelleArme);


}

bool Personnage::estVivant() const {

	return m_vie > 0; // meilleur facon d'ecrire pour les booleens
}
//------------------------------------------------------------------------------//

/*
 * Accesseur en lecture (Attribut: "nom")
 */
string Personnage::getNom()
{
	return this->m_nom;
}

/*
 * Accesseur en lecture (Attribut: "nom arme")
 */
string Personnage::getArme()
{
	return this->m_arme;
}

/*
 * Accesseur en lecture (Attribut: "Santé")
 */
int Personnage::getVie()
{
	return *this->m_vie;
}

/*
 * Accesseur en lecture (Attribut: "Energie")
 */
int Personnage::getMana()
{
	return this->m_mana;
}
//------------------------------------------------------------------------------//
// le destructor terminator erasor de thor
Personnage::~Personnage() {
	delete m_arme;
}

//--------------------------------------------------------------//

// l'affichage de l'etat
void Personnage::afficherEtat() const {
	cout << "Perso : " << m_nom << endl;
	cout << "Vie : " << m_vie << endl;
	cout << "Magie : " << m_mana << endl;
	m_arme->afficher();
}

void Personnage::affPVie() const{
	cout << "le perso : " << m_nom << endl;
	cout << "Son niveau de Vie : " << m_vie << endl;
}

void Personnage::affArme() const{

	m_arme->afficher();
}

void Personnage::sePresenter() const {
	cout << "Bonjour !, je m'appelle " << m_nom << "." << endl;
	cout << "Je me bat avec " << m_arme << "." << endl;
}

Personnage* Personnage::getInstance() {
	if (NULL == _singleton)
	{
		cout << "Creating singleton." << endl;
		_singleton = new Personnage;
	}
	else
	{
		cout << "singleton already created!" << endl;
	}
	return _singleton;
}

void Personnage::kill() {
    if (NULL != _singleton)
      {
        delete _singleton;
        _singleton = NULL;
      }
}
