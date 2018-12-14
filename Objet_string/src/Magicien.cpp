/*
 * Magicien.cpp
 *
 *  Created on: 3 mai 2018
 *      Author: 34011-55-04
 */
#include <iostream>
#include <string>

#include "Magicien.h"

using namespace std;

Magicien::Magicien() : Personnage(), m_mana(100)
{
	this->m_mana = Magicien().m_mana;
}

Magicien::Magicien(string nom) : Personnage(), m_mana(100)
{
	this->m_mana = Magicien().m_mana;
}

Magicien::Magicien(const Magicien& autre) : Personnage()
{
	this->m_mana = Magicien().m_mana;
}

Magicien::~Magicien() {
	// TODO Auto-generated destructor stub
}

//--------------------------------------------------------------//


Personnage* Magicien::bouleDeFeu(){
	return this;
}

Personnage* Magicien::bouleDeGlace() {
	return this;
}

void Magicien::Magicien::sePresenter() const {
	cout << "Olaaa ! mon amie, je suis le magicien " << m_nom << "." << endl;
	cout << "Je forme " << m_mana << "." << endl;
}
//--------------------------------------------------------------//

