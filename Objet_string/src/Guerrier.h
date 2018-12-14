/*
 * Guerrier.h
 *
 *  Created on: 3 mai 2018
 *      Author: 34011-55-04
 */

#ifndef GUERRIER_H_
#define GUERRIER_H_

#include <iostream>
#include <string>
#include <vector>

#include "Personnage.h"


class Guerrier : public Personnage
{
public:
	Guerrier();

	Guerrier(std::string nom);

	Guerrier(Guerrier const& autre);

	virtual ~Guerrier();

//--------------------------------------------------------------//

	Personnage* coupsFeroce();
	Personnage* recevoirDegats();

	void sePresenter() const;

private :
	int m_mana;
};



#endif /* GUERRIER_H_ */
