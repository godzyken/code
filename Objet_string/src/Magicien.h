/*
 * Magicien.h
 *
 *  Created on: 3 mai 2018
 *      Author: 34011-55-04
 */

#ifndef MAGICIEN_H_
#define MAGICIEN_H_

#include <iostream>
#include <string>

#include "Personnage.h"


class Magicien : public Personnage
{
public:
	Magicien();

	Magicien(std::string nom);

	Magicien(Magicien const& autre);

	virtual ~Magicien();
//--------------------------------------------------------------//
	Personnage* bouleDeFeu();
	Personnage* bouleDeGlace();

	void sePresenter() const;

private :
	int m_mana;
};


#endif /* MAGICIEN_H_ */
