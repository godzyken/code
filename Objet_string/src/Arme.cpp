/*
 * Arme.cpp
 *
 *  Created on: 26 avr. 2018
 *      Author: 34011-55-04
 */

#include "Arme.h"

using namespace std;

Arme::Arme() : m_nom("La fourchette de poseïdon"), m_degats(10)
{
	// TODO Auto-generated constructor stub

}

Arme::Arme(string nom, int degats) : m_nom(nom), m_degats(degats)
{


}

Arme::Arme(Arme const& arme){
	m_nom = arme.m_nom;
	m_degats = arme.m_degats;
}

void Arme::changer(string nom, int degats)
{
	m_nom = nom;
	m_degats = degats;

}

void Arme::afficher() const
{
	cout << "Arme : " << m_nom << " (Dégats : " << m_degats << ")" << endl;

}

// accesseur qui recupere les valeur de l attribut attaquer
int Arme::getDegats() const
{
	return m_degats;
}

//Arme::~Arme() {
//	// TODO Auto-generated destructor stub
//}
