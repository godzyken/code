/*
 * Guerrier.cpp
 *
 *  Created on: 3 mai 2018
 *      Author: 34011-55-04
 */
#include <iostream>
#include <string>
#include <vector>

#include "Guerrier.h"

using namespace std;

Guerrier::Guerrier() : Personnage(), m_mana(100)
{
	this->m_mana = Guerrier().m_mana;

}

Guerrier::Guerrier(string nom) : Personnage(), m_mana(100)
{
	this->m_mana = Guerrier().m_mana;
}

Guerrier::Guerrier(const Guerrier &autre) : Personnage()
{
	this->m_mana = Guerrier().m_mana;
}

Guerrier::~Guerrier() {
	// TODO Auto-generated destructor stub
}


//--------------------------------------------------------------//

Personnage* Guerrier::recevoirDegats() {

return this;
}

Personnage* Guerrier::coupsFeroce()
{

	return this;
}

void Guerrier::sePresenter()const{
	cout << "Wa GoWan !, je s'appelle " << m_nom << "." << endl;

}



